//============================================================================
// Name        : Lab9.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-09
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================
#include <iostream>
#include <math.h>
using namespace std;

/*
Circle Class definition - Begin
*/
class Circle
{
private:
    int radius; // attribute

public:
    Circle();  // constractor
    ~Circle(); // destructor
    int getRadius();
    void setRadius(int r);
    float CalcArea();
};

/*
Member function Definitions
*/
Circle::Circle()
{ // constructor
    radius = 0;
}

Circle::~Circle()
{ // destructor
}

int Circle::getRadius()
{ // accessor
    return radius;
}
void Circle::setRadius(int r)
{ // mutator
    radius = r;
}

float Circle::CalcArea()
{
    return M_PI * pow(radius, 2);
}

/*
Sqaure Class definition
*/
class Square
{
private:
    int side; // attribute

public:
    Square();  // constructor
    ~Square(); // destructor
    int getSide();
    void setSide(int s);
    float CalcArea();
};

/*
Member function Definitions
*/
Square::Square()
{ // constructor
    side = 0;
}

Square::~Square()
{ // destructor
}

int Square::getSide()
{
    // accessor
    return side;
}
void Square::setSide(int s)
{
    // mutator
    side = s;
}

float Square::CalcArea()
{
    return pow(side, 2);
}

string findArea(Circle circle, Square square, string choice);

int main()
{
    string result = "";
    string choice = "";
    cout << "Enter your choice (Circle or Square): ";
    cin >> choice;
    Circle circle;
    Square square;
    result = findArea(circle, square, choice);
    cout << result;
    return 0;
}


// findArea Calculates the area of either circle or square based on choice value
// Parameters: circle obj based on Circle class, square obj based on Sqaure class, 
//             choice that could be "Circle" or "Sqaure"
// Return: The area of the circle or square as a string.
string findArea(Circle circle, Square square, string choice)
{
    string result = "";
    int radius = 0;
    int side = 0;
    if (choice == "Circle")
    {
        cout << "Enter radius of Circle: ";
        cin >> radius;
        circle.setRadius(radius);
        result = "Area of the Circle: " + to_string(circle.CalcArea());
    }
    else if (choice == "Square")
    {
        cout << "Enter the side of a Square: ";
        cin >> side;
        square.setSide(side);
        result = "Area of the Sqaure: " + to_string(square.CalcArea());
    }
    else
    {
        result = "Please Enter \"Circle\" or \"Square\".";
    }

    return result;
}