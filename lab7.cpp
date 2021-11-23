//============================================================================
// Name        : Lab7.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-07
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================
#include <iostream>
using namespace std;

void processData(char text[], int size);
bool isNumber(char ch);
bool isUpperCase(char ch);
bool isLowerCase(char ch);

int main()
{
    string str;         // user's input string
    int lenghtStr = -1; // size of user's input
    cout << "Enter some text: ";
    getline(cin, str);

    // length of user's input
    int lengthStr = str.length();

    // A char array with the same size as the user's input
    char myArr[lengthStr];

    // Converting input string (str) to character array (myArr)
    str.copy(myArr, lengthStr, 0);
    myArr[lengthStr] = '\0';

    // processing the character array (myArr) and print outputs
    processData(myArr, lengthStr);
    return 0;
}

// processData method takes a character array and its size and count all the upper case letters, lower
// case letters and numbers (digits) in the character array.
// Parameters: a character array text[] and its size
// Returns: void
void processData(char text[], int size)
{
    int countNumbers = 0;
    int countUpperCase = 0;
    int countLowerCase = 0;

    for (int i = 0; i < size; i++)
    {

        if (isNumber(text[i]))
        {
            countNumbers++;
        }
        else if (isUpperCase(text[i]))
        {
            countUpperCase++;
        }
        else if (isLowerCase(text[i]))
        {
            countLowerCase++;
        }
    }

    // print outputs
    cout << "Count of Numbers: " << countNumbers << endl;
    cout << "Count of Upper Case: " << countUpperCase << endl;
    cout << "Count of Lower Case: " << countLowerCase << endl;
}

// isNumber method takes a character and determines that is that character a number or not.
// Parameters: a character ch
// Returns: a boolean; True when ch is a number; otherwise False
bool isNumber(char ch)
{
    bool flag = false;
    if (isdigit(ch))
    {
        flag = true;
    }
    return flag;
}

// isUpperCase method takes a character and determines that is the character a uppercase letter or not.
// Parameters: a charcter ch
// Returns: a boolean; True when ch is a uppercase letter; otherwise False
bool isUpperCase(char ch)
{
    bool flag = false;
    if (isupper(ch))
    {
        flag = true;
    }
    return flag;
}

// isLowerCase method takes a character and determines that is the character a lowercase letter or not.
// Parameters: a charcter ch
// Returns: a boolean; True when ch is a lowercase letter; otherwise False
bool isLowerCase(char ch)
{
    bool flag = false;
    if (islower(ch))
    {
        flag = true;
    }
    return flag;
}
