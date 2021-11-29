//============================================================================
// Name        : Lab10.cpp
// Author      : Aref Abedjooy
// Version     : 1.0
// Copyright   : Copyright (c) 2021, Aref Abedjooy. No Rights Reserved.
// Description : This is a sample code for Lab-10
//               in the "CSCI 1060U – Programming Workshop" course
//               which was taught at Ontario tech University during Fall 2021 term.
//============================================================================
#include <iostream>
#include <math.h>
using namespace std;

// a Node stores one item in the stack
struct Node
{
    char data;
    Node *next; // points to next node in the stack
};
class Stack
{
    Node *top;

public:
    Stack();  // constructor
    ~Stack(); // destructor
    bool isEmpty() { return (top == NULL); };
    void push(char d); // pushes a node containg data d to stack
    char pop();        // pop top node off stack, return char data
    string toString(); // print stack to console
};
Stack::Stack()
{
    top = NULL;
}
Stack::~Stack()
{
    // implement later
    while (!isEmpty())
    {
        cout << "deleting node" << endl;
        pop();
    }
}
void Stack::push(char d)
{
    Node *newtop = new Node;
    newtop->data = d;
    newtop->next = top; // points new node to the top of the stack
    top = newtop;       // makes new node the top of the stack
}
char Stack::pop()
{
    if (isEmpty())
    {
        return '\0';
    }
    else
    {
        char value = top->data;
        Node *oldtop = top;
        top = top->next; // reassign the top of the stack to second top element (node below old top)
        delete oldtop;
        return value; // holds value of popped node
    }
}
string Stack::toString()
{
    string result = "";
    Node *current = top;
    while (current != NULL)
    {
        result += current->data;
        current = current->next;
    }
    return result;
}

int main()
{
    string word = ""; // A string for storing user input
    string poppedWord = ""; // A string for storing generated word by poping charachter from stack
    Stack *s = new Stack(); // a Stack Obj

    cout << "Enter a word: ";
    cin >> word;

    // Push all characters of word into stack
    for (char ch : word)
    {
        s->push(ch);
    }

    // pop all characters to generate inverse word i.e. poppedWord.
    while (!s ->isEmpty())
    {
        poppedWord += s->pop();
    }

    if (word == poppedWord)
    {
        cout << word << " is a Palindrome.";
    }
    else
    {
        cout << word << " is not a Palindrome.";
    }

    return 0;
}