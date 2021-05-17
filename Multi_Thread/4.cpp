// std::unique_lock
// 객체 먼저 생성 뒤, 필요한 시점에 락 점유 시도 가능
// 소멸하기 전에 다시 lock 혹은 unlock을 할 수 있다.

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

class Counter {
    int _nID, _nItr;
    static timed_mutex _oTimedMutex;
public:
    Counter(int id, int nItr) :_nID(id), _nItr(nItr) {
    }
    void operator()() const {
        for (int i = 0; i < _nItr; ++i) {
            unique_lock<timed_mutex> lock(_oTimedMutex, chrono::milliseconds(200));
            if (lock) {
                cout << "Counter " << _nID << " has value ";
                cout << i << endl;
            }
            else {
            }
        }
    }
};
timed_mutex Counter::_oTimedMutex;

int main() {

    cout.sync_with_stdio(true);

    thread t1{ Counter(1,20) };

    Counter c(2, 12);
    thread t2(c);

    thread t3(Counter(3, 10));

    t1.join();
    t2.join();
    t3.join();

    return 0;
}