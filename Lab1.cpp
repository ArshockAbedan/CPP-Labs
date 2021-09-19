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

    //
    cout << "Enter Job Applicant's Name: ";
    cin >> name;
    cout << "Enter Job Applicant's Birth Year: ";
    cin >> birthYear;
    cout << "Enter Job Applicant's Hourlt Wage: ";
    cin >> hourlyWage;
    cout << "********************************" << "\n\n\n";

    // Get Curent Year
    time_t t = time(nullptr);
    tm *const pTInfo = localtime(&t);
    currentYear = 1900 + pTInfo->tm_year;
    // Compute Job Applicant's age
    age = currentYear - birthYear;

    result = name + " is " + to_string(age) +
             " years old and requests an hourly wage of $" +
             to_string(hourlyWage);

    cout << result << "\n\n";
    return 0;
}