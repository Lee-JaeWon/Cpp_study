//mutex & lock

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

#define val 1000

int value;
mutex mtxValue;

void increase_value() {
    mtxValue.lock();

    value++;
    cout << value << endl;

    mtxValue.unlock();
}

int main() {

    value = 0;
    thread t[val];

    for (auto i = 0; i < val; i++) {
        t[i] = thread(increase_value);
    }

    for (int i = 0; i < val; i++) {
        t[i].join();
    }
}