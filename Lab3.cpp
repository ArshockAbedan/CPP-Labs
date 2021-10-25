//============================================================================
// Name        : Lab3.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-03
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================

#include <iostream>
using namespace std;

bool isPerfect(int number);
int countPerfect();

int main()
{
	// Count the total number of perfect numbers and store it in the variable 'totalPerfectNum'
	int totalPerfectNum = countPerfect();
	cout << "Total Perfect Numbers: " << totalPerfectNum << endl;
	return 0;
}

bool isPerfect(int number)
{
	// Function to check whether a number is perfect or not
	// Input Parameters: 'number' -> An Integer Number.
	// Return Value: True if 'number' is a prefect number / False if 'number' is NOT a prefect number.

	// local variable declaration:
	int sumDivisors = 0;
	bool result = false;

	for (int i = 1; i < number; i++) // for loop to find the sum of all divisors of the number
	{
		if (number % i == 0)
		{
			sumDivisors += i;
		}
	}

	if (number == sumDivisors) // if the number is a perfect number
	{
		result = true;
	}
	else // else if the number is not a perfect number
	{
		result = false;
	}

	return result;
}

int countPerfect()
{
	// Function to count the total number of perfect numbers
	// Input Parameters: Nothing
	// Return Value: Total number of perfect numbers

	// local variable declaration:
	int num = 0;
	int total = 0; // the total number of perfect numbers

	// while loop to repeat asking user for numbers until user decides to quit by inputting '-1'
	while (num != -1)
	{
		cout << "Enter a number (-1 to quit): ";
		cin >> num;

		if (isPerfect(num))
		{
			total++;
		}
	}
	return total;
}
