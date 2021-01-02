//8,Exp.h
#ifndef _8_EXP_H_
#define _8_EXP_H_

class Exp {
private:
	int base, expo; //exponent
public:
	Exp();
	Exp(int);
	Exp(int, int);

	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

#endif // !_8_EXP_H_