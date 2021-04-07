#ifndef HW4_H
#define HW4_H

#include <iostream>
using namespace std;

class Person {
protected:
    int age;
    string job, doing;

    string Eat();
    string Talk();
    string Run();
public:
    Person(int age = 0) { this->age = age; }
    void show_info();
};

class Professor : public Person {
private:
    int p_age = 38;
public:
    Professor();
};

class TennisPlayer : public Person {
private:
    int p_age = 24;
public:
    TennisPlayer();
};

class Businessman : public Person {
private:
    int p_age = 30;
public:
    Businessman();
};

#endif // HW4_H
