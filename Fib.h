#pragma once
class Fib
{
public:
	Fib();
	void advance_by(int bottom_limit);
	void advance_by();
	void clearValues();

	int  takeSum(int upper_limit);
	int  takeSum();


	int firstNumber = 0, secondNumber = 1, lastNumber = firstNumber + secondNumber, total=0;
	void operator++(int);



};

