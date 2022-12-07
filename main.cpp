#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void MakeFibonacci()
{

	int firstNumber, secondNumber, thirdNumber, maxSteps, sumAllNumbers;
	firstNumber = 0;
	secondNumber = 1;
	thirdNumber = firstNumber + secondNumber;
	sumAllNumbers =0;

	cout << "Podaj do ilu przejsc ma byc wyswietlany ciag Fibanacciego:" << endl;
	cin >> maxSteps;
	string fibonacciIntroduce = "Ciag licz Fibonacciego dla " + to_string(maxSteps) + " przejsc to: ";
	if (maxSteps < 1)
	{
		cout << fibonacciIntroduce << firstNumber;
		sumAllNumbers = 0;
	}
	else if (maxSteps == 1)
	{
		cout << fibonacciIntroduce<< firstNumber << ", " << secondNumber;
		sumAllNumbers = 1;
	}
	else
	{
		sumAllNumbers = 1;
		cout << fibonacciIntroduce << firstNumber << ", " << secondNumber << ", ";
		for (int i = 1; i < maxSteps; i++)
		{
			sumAllNumbers += thirdNumber;
			cout << thirdNumber << ", ";
			firstNumber = secondNumber;
			secondNumber = thirdNumber;
			thirdNumber = firstNumber + secondNumber;
		}
	

		cout << endl << "Suma wszystkich liczb w ciagu wynosi:" << endl;

		cout << sumAllNumbers<< endl;

	}
}
int main()
{
	MakeFibonacci();
}
