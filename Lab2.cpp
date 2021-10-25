//============================================================================
// Name        : Lab2.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-02
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int num = 0;

	// initialize random seed
	srand(time(0));
	// generate a random number between 0 - 50
	int rand_num = rand() % 51;

	// initialize counter
	int i = 0;
	do
	{
		num = 0;
		cout << "Guess a number between (0 - 50): ";
		std::cin >> num;
		if (num > rand_num)
		{
			cout << "Your  Guess  is  high." << endl;
		}
		else if (num < rand_num)
		{
			cout << "Your  Guess  is  low." << endl;
		}
		else
		{
			cout << "You win!!!";
		}
		i = i + 1;
	} while (i < 5 and num != rand_num);

	// Check if it is a lost situation or not
	if (num != rand_num)
	{
		cout << "You lost!!!" << endl;
		cout << "The number was: " << rand_num;
	}

	return 0;
}
