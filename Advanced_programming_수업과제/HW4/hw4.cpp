#include "hw4.h"

string Person::Eat() { return "Eat"; }
string Person::Talk() { return "Talk"; }
string Person::Run() { return "Run"; }
void Person::show_info() {
    cout << "Job : " << this->job << endl;
    cout << "Age : " << this->_age << endl;
    cout << Eat() << endl << Talk() << endl << Run() << endl;
    cout << this->doing << endl;
}

Professor::Professor(const int& n_age, const string& n_job) {
    this->_age = n_age;
    this->job = n_job;
    this->doing = Teach();
}
string Professor::Teach(){ return "Teach"; }

TennisPlayer::TennisPlayer(const int& n_age, const string& n_job) {
    this->_age = n_age;
    this->job = n_job;
    this->doing = PlayTennis();
}
string TennisPlayer::PlayTennis(){ return "PlayTennis"; }

Businessman::Businessman(const int& n_age, const string& n_job) {
    this->_age = n_age;
    this->job = n_job;
    this->doing = RunBusiness();
}
string Businessman::RunBusiness(){ return "RunBusiness"; }
