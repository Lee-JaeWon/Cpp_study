#ifndef HW4_H
#define HW4_H

#include <iostream>
using namespace std;

class Person {
protected:
    int _age;
    string job, doing;

    string Eat();
    string Talk();
    string Run();
public:
    Person(int age = 0) { this->_age = age; }
    void show_info();
};

class Professor : public Person {
public:
    Professor(const int& n_age, const string& n_job);
    string Teach();
};

class TennisPlayer : public Person {
public:
    TennisPlayer(const int& n_age, const string& n_job);
    string PlayTennis();
};

class Businessman : public Person {
public:
    Businessman(const int& n_age, const string& n_job);
    string RunBusiness();
};

#endif // HW4_H
