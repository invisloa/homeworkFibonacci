#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void MakeFibonacci()
{

	int firstNumber, secondNumber, thirdNumber, maxSteps, total;
	firstNumber = 0;
	secondNumber = 1;
	thirdNumber = firstNumber + secondNumber;
	total =0;

	cout << "Podaj do ilu przejsc ma byc wyswietlany ciag Fibanacciego:" << endl;
	cin >> maxSteps;
	string fibonacciIntroduce = "Ciag licz Fibonacciego dla " + to_string(maxSteps) + " przejsc to: ";
	if (maxSteps < 1)
	{
		cout << fibonacciIntroduce << firstNumber;
		total = 0;
	}
	else if (maxSteps == 1)
	{
		cout << fibonacciIntroduce<< firstNumber << ", " << secondNumber;
		total = 1;
	}
	else
	{
		total = 1;
		cout << fibonacciIntroduce << firstNumber << ", " << secondNumber << ", ";
		for (int i = 1; i < maxSteps; i++)
		{
			total += thirdNumber;
			cout << thirdNumber << ", ";
			firstNumber = secondNumber;
			secondNumber = thirdNumber;
			thirdNumber = firstNumber + secondNumber;
		}
	

		cout << endl << "Suma wszystkich liczb w ciagu wynosi:" << endl;

		cout << total<< endl;

	}
}
int main()
{
	MakeFibonacci();
}
