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

// power function compute base^exponent
// Parameters: base, exponent, result is pointer
// Returns: void, but result is a pointer so value of its reference can be changed

void power(int base, int exponent, int* result){
    // set default value for reference of result pointer
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
    // the address of result i.e. would be pass to the pointer
    power(base, exponent, &result);
    cout << "Result: " << result;
    return 0;
}
