//Multi Threading
//using Lambda Expression

#include <iostream>
#include <thread>
using namespace std;

int main(){

    cout.sync_with_stdio(true);

    auto func = [](int id, int num){
        for(int i = 0; i < num; ++i){
            cout << "Counter " << id << " has value ";
            cout << i << endl;
        }
    };
    thread t1(func, 1, 5);

    t1.join();
}