// std::lock_guard
// 생성자에서 뮤텍스 락 점유 시작
// 소멸자에 의해 unlock

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

class Counter {
    int _nID, _nItr;
    static mutex _oMutex;
public:
    Counter(int id, int nItr) :_nID(id), _nItr(nItr) {
    }
    void operator()() const {
        for (int i = 0; i < _nItr; ++i) {
            lock_guard<mutex> lock(_oMutex);
            cout << "Counter " << _nID << " has value ";
            cout << i << endl;
        }
    }
};
mutex Counter::_oMutex;

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