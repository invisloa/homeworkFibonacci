#include "pch.h"
#include <iostream>
#include <string>
#include "Fib.h"

using namespace std;

int main()
{
	Fib fib;
	fib.advance_by(8);
	fib.clearValues();
	fib.takeSum(6);
}
