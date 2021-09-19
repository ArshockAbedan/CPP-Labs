//============================================================================
// Name        : Lab1.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : This is a sample code for Lab-01
//               in the "CSCI 1060U – Programming Workshop" course 
//               which was taught at Ontario tech University during Fall 2021 term. 
//============================================================================
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Variables Declaration
    string name;
    int birthYear;
    int hourlyWage;
    int age;
    int currentYear;
    string result;
    int Aref;

    // Get Applicant's Information
    cout << "Enter Job Applicant's Name: ";
    cin >> name;
    cout << "Enter Job Applicant's Birth Year: ";
    cin >> birthYear;
    cout << "Enter Job Applicant's Hourlt Wage: ";
    cin >> hourlyWage;

    // Compute Curent Year
    time_t t = time(nullptr);
    tm *const pTInfo = localtime(&t);
    currentYear = 1900 + pTInfo->tm_year;
    
    // Compute Job Applicant's age
    age = currentYear - birthYear;

    result = name + " is " + to_string(age) +
             " years old and requests an hourly wage of $" +
             to_string(hourlyWage);

    // Print the output
    cout << "********************************" << "\n\n\n";
    cout << result << "\n\n";
    return 0;
}