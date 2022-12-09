#include "pch.h"
#include "Fib.h"
#include <iostream>
#include <string>


using namespace std;

Fib::Fib()
{
}
void Fib::operator++(int)
{
	firstNumber = secondNumber;
	secondNumber = lastNumber;
	lastNumber = firstNumber + secondNumber;
}

int  Fib::takeSum(int upper_limit)
{
	string fibonacciIntroduce = "Ciag licz Fibonacciego do liczby " + to_string(upper_limit) + "  to: ";
	if (upper_limit < 1)
	{
		cout << fibonacciIntroduce << firstNumber;
	}
	else if (upper_limit == 1)
	{
		cout << fibonacciIntroduce << firstNumber << ", " << secondNumber;
	}
	else
	{

		total = 1;
		cout << fibonacciIntroduce << firstNumber << ", " << secondNumber << ", ";
		while (lastNumber < upper_limit)
		{
			total += lastNumber;
			cout << lastNumber << ", ";
			this->operator++(0);
		}


		cout << endl << "Suma wszystkich liczb w ciagu wynosi:" << endl;

		cout << total << endl;

	}
	return total;

}
int  Fib::takeSum()
{
	int upper_limit;
	cout << "Podaj do jakiej liczby ma byc wyswietlany ciag Fibanacciego:" << endl;
	cin >> upper_limit;
	return takeSum(upper_limit);
}

void Fib::advance_by(int bottom_limit)
{
	string fibonacciIntroduce = "Ciag licz Fibonacciego dla " + to_string(bottom_limit) + " przejsc to: ";
	if (bottom_limit < 1)
	{
		cout << fibonacciIntroduce << firstNumber;
		total = 0;
	}
	else if (bottom_limit == 1)
	{
		cout << fibonacciIntroduce << firstNumber << ", " << secondNumber;
		total = 1;
	}
	else
	{

		total = 1;
		cout << fibonacciIntroduce << firstNumber << ", " << secondNumber << ", ";
		for (int i = 1; i < bottom_limit; i++)
		{
			total += lastNumber;
			cout << lastNumber << ", ";
			this->operator++(1);
		}


		cout << endl << "Suma wszystkich liczb w ciagu wynosi:" << endl;

		cout << total << endl;

	}
}
void Fib::advance_by()
{
	int bottom_limit;
	cout << "Podaj do ilu przejsc ma byc wyswietlany ciag Fibanacciego:" << endl;
	cin >> bottom_limit;
	advance_by(bottom_limit);
	
}

void Fib::clearValues()
{
	firstNumber = 0;
	secondNumber = 1;
	lastNumber = firstNumber + secondNumber;
	total = 0;
}
