//============================================================================
// Name        : hello_world.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num = 0;

	// initialize random seed
	srand(time(0));
	// generate a random number between 0 - 50
	int rand_num = rand() % 51;
	
	
    int i = 0;
	do {
		num = 0;
		cout << "Guess a number between (0 - 50): ";
		std::cin >> num;
		if (num > rand_num) {
			cout << "Your  Guess  is  high."<< endl;
		} else if (num < rand_num) {
			cout << "Your  Guess  is  low." << endl;
		} else {
			cout << "You win!!!";
		}
		i = i+1;
	} while (i < 5 and num!=rand_num);

     if (num!=rand_num) {
    	 cout << "You lost!!!" << endl ;
    	 cout << "The number was: " << rand_num;
     }

	return 0;
}
