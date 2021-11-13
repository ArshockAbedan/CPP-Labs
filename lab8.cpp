//============================================================================
// Name        : Lab8.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-08
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================
#include <iostream>
using namespace std;

void power(int base, int exponent, int* result){
	*result = 1;
	for(int i = 0; i < exponent; i++){
		*result = *result * base;
	}

}
int main(){
    cout << "Enter the Base value: ";
    int base;
    cin >> base;
    cout << "Enter the Exponent value: ";
    int exponent;
    cin >> exponent;
    int result;
    power(base, exponent, &result);
    cout << "Result: " << result;
}
