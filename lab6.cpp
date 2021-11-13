//============================================================================
// Name        : Lab6.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-06
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================
#include <iostream>
using namespace std;
// Size of Students
const int SIZE = 10;

void bubble_sort(int grades[], int LengthOfArray);
void display_marks(int grades[], int len);

int main()
{
    int grades[SIZE];
    int pass = 0;
    int fail = 0;
    for (int i = 0; i < SIZE; i++)
    {
        // Get the input grades from user
        cout << "Enter the marks of Student #" << i + 1 << ": ";
        cin >> grades[i];
        cout << endl;
    }

    display_marks(grades, SIZE);
    bubble_sort(grades, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        // This condition seperates the failing and passing grades resulting in the passing grades being printed
        if (grades[i] >= 60)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
    cout << endl;
    // Print the passing students in order going largest to smallest
    cout << "List of students who passed the course in descending order" << endl;
    cout << "**********************************************************" << endl;
    // The pass variable is number of students who passed.
    display_marks(grades, pass);
    cout << endl;
    cout << "Class Status" << endl;
    cout << "*********************" << endl;
    // Displays the number of students who passed
    cout << "Number of students who passed the course: " << pass << endl;
    // Displays the number of students who failed
    cout << "Number of students who failed the course: " << fail;
    return 0;
}

// The bubble_sort function sorts input array 'grades[]'.
// using The Bubble sort
// Parameters: grades[]: array of integers, LengthOfArray: Length of grades[]
// Returns: void, The grades[] is called by reference so it would be sorted in Main function
void bubble_sort(int grades[], int LengthOfArray)
{
    for (int i = 0; i < LengthOfArray - 1; i++)
    {
        for (int j = 0; j < LengthOfArray - i - 1; j++)
        {
            if (grades[j + 1] > grades[j]) // descending order
            {
                swap(grades[j], grades[j + 1]);
            }
        }
    }
}

// The display_marks function prints gardes of students
// Parameters: grades[]: array of integers, len: size of grades
// Returns: void
void display_marks(int grades[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // Show all of the grades
        cout << "Marks for Student #" << i + 1 << ": " << grades[i] << endl;
    }
}
