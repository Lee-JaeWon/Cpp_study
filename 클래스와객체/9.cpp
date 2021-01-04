//실습문제 2번, 3번, 4번

//실습문제 2번
//string, substr함수
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year, month, day;
	string str;
public:
	Date(int, int, int);
	Date(string);
	void show();

	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y; month = m; day = d;
}
Date::Date(string str) {
	year = stoi(str.substr(0, 4));
	month = stoi(str.substr(5, 1));
	day = stoi(str.substr(7, 2));

}
void Date::show() {
	cout << year << "년 " << month << "월 " << day << "일 " << endl;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}

int main() {

	Date birth(2001, 9, 7);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

}


//실습문제 3번
//계좌 관리
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id; int balance; //id, 잔액
public:
	Account(string, int, int);
	void deposit(int);
	int withdraw(int);
	string getOwner();
	int inquiry();
};

Account::Account(string username, int userid, int userbalance) {
	name = username; id = userid; balance = userbalance;
}
void Account::deposit(int depositmoney) {

	balance += depositmoney;
}
int Account::withdraw(int withdrawmoney) {
	balance -= withdrawmoney;
	return withdrawmoney;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}


int main() {
	Account woori("Jaewon", 1, 5000);
	woori.deposit(50000);
	cout << woori.getOwner() << "의 잔액은 " << woori.inquiry() << "원 입니다." << endl;

	int money = woori.withdraw(20000);
	cout << woori.getOwner() << "의 잔액은 " << woori.inquiry() << "원 입니다." << endl;
}


//실습문제 4번 
//간단한 커피머신
#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee; int water; int sugar;
public:
	CoffeeMachine();
	CoffeeMachine(int, int, int);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine() : CoffeeMachine(10, 10, 10) {}
CoffeeMachine::CoffeeMachine(int Mcoffee, int Mwater, int Msugar) {
	coffee = Mcoffee; water = Mwater; sugar = Msugar;
}
void CoffeeMachine::drinkEspresso() {
	coffee -= 1; water -= 1;
}
void CoffeeMachine::drinkAmericano() {
	coffee -= 1; water -= 2;
}
void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1; water -= 2; sugar -= 1;
}
void CoffeeMachine::show() {
	cout << "커피 머신 상태, ";
	cout << "커피: " << coffee << " 물: " << water << " 설탕: " << sugar << endl;
}
void CoffeeMachine::fill() {
	coffee = 10; water = 10; sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}