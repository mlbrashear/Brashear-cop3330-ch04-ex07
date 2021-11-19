/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    //declare variables
    string a, b;
    char operation;
    int num1, num2, num3;

    //get user input
    cout << "Please enter two numbers, followed by the operation you wish to use: ";
    cin >> a >> b;
    cin >> operation;

    //see if the string is a number or word
    if(a.compare("one") == 0)
        num1 = 1;
    else if(a.compare("two") == 0)
        num1 = 2;
    else if(a.compare("three") == 0)
        num1 = 3;
    else if(a.compare("four") == 0)
        num1 = 4;
    else if(a.compare("five") == 0)
        num1 = 5;
    else if(a.compare("six") == 0)
        num1 = 6;
    else if(a.compare("seven") == 0)
        num1 = 7;
    else if(a.compare("eight") == 0)
        num1 = 8;
    else if(a.compare("nine") == 0)
        num1 = 9;
    else if(a.compare("zero") == 0)
        num1 = 0;
    else
        num1 = stoi(a);

    if(b.compare("one") == 0)
        num2 = 1;
    else if(b.compare("two") == 0)
        num2 = 2;
    else if(b.compare("three") == 0)
        num2 = 3;
    else if(b.compare("four") == 0)
        num2 = 4;
    else if(b.compare("five") == 0)
        num2 = 5;
    else if(b.compare("six") == 0)
        num2 = 6;
    else if(b.compare("seven") == 0)
        num2 = 7;
    else if(b.compare("eight") == 0)
        num2 = 8;
    else if(b.compare("nine") == 0)
        num2 = 9;
    else if(b.compare("zero") == 0)
        num2 = 0;
    else
        num2 = stoi(b);

    //determine what the operation is and print the result
    if (operation == '+') {
        num3 = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << num3;
    }
    else if (operation == '-') {
        num3 = num1 - num2;
        cout << "The difference of " << num1 << " and " << num2 << " is " << num3;
    }
    else if (operation == '*') {
        num3 = num1 * num2;
        cout << "The product of " << num1 << " and " << num2 << " is " << num3;
    }
    else if (operation == '/') {
        num3 = num1 / num2;
        cout << "The quotient of " << num1 << " and " << num2 << " is " << num3;
    }
    else
        cout << "invalid input";
}

