//8,Exp.cpp
#include <iostream>
#include <math.h>

#include "8,Exp.h"

Exp::Exp() : Exp(1, 1) {}
Exp::Exp(int a) { base = a; expo = 1; }
Exp::Exp(int a, int b) { base = a; expo = b; }

int Exp::getValue() {
	return pow(base, expo);
}

int Exp::getBase() {
	return base;
}
int Exp::getExp() {
	return expo;
}
bool Exp::equals(Exp b) {
	if (this->getValue() == b.getValue())
		return true;
	else
		return false;
}