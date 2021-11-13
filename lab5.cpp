//============================================================================
// Name        : Lab5.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-05
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string address = "2000 Simcoe St N, Oshawa, ON, L1G 0C5, Canada"; // Input address
    
    string delimiter = ",";

    // Find the positions of the delimiters
	int first_comma = address.find(delimiter);
	// Second input parameter for 'find' function is 'pos' which is
    // the position of the first character in the string to be considered in the search.
    int second_comma = address.find(delimiter, first_comma + 1); 
	int third_comma = address.find(delimiter, second_comma + 1);
	int fourth_comma = address.find(delimiter, third_comma + 1);

    // Second input parameter for 'substr' function is 'len' which is
    // the number of characters to include in the substring
	string street = address.substr(0, first_comma);
	string city = address.substr(first_comma + 2, second_comma-first_comma-2); // 2 because of ',' + space 
	string province = address.substr(second_comma + 2, third_comma-second_comma-2);
	string postal_code = address.substr(third_comma + 2, fourth_comma - third_comma - 2);
    // 'lenght' function returns the length of the string
	string country = address.substr(fourth_comma + 2, address.length() - fourth_comma); 
	
    // Print the outputs
    cout << "Address: " << address << endl;
	cout << "**************************************************" << endl;
	cout << "Street: " << street << endl;
	cout << "City: " << city << endl;
	cout << "Province: " << province << endl;
	cout << "Postal Code: " << postal_code << endl;
	cout << "Country: " << country << endl;
	return 0;
}