#include <iostream>
using namespace std;

#include "hw4.h"

string Person::Eat() {
    return "Eat";
}
string Person::Talk() {
    return "Talk";
}
string Person::Run() {
    return "Run";
}
void Person::show_info() {
    cout << "Job : " << this->job << endl;
    cout << "Age : " << this->age << endl;
    cout << Eat() << endl << Talk() << endl << Run() << endl;
    cout << this->doing << endl;
}

Professor::Professor() {
    this->age = p_age;
    this->job = "Professor";
    this->doing = "Teach";
}

TennisPlayer::TennisPlayer() {
    this->age = p_age;
    this->job = "TennisPlayer";
    this->doing = "PlayTennis";
}

Businessman::Businessman() {
    this->age = p_age;
    this->job = "Businessman";
    this->doing = "run a business";
}
