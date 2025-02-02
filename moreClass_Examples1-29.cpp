// moreClass_Examples1-29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    char math;
    double num1, num2, result;
    string input;

    cout << "Enter an operation plus, minus, mul, divsion: ";
    getline(cin, input);
    if (input.size() != 1 || !(input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/')) {
        cout << "Invalid operation";
        return 1;
    }
    math = input[0];

    cout << "Enter two numbers: ";
    getline(cin, input);
    stringstream ss(input);
    if (!(ss >> num1 >> num2)) {
        cout << "Invalid input";
        return 1;
    }

    switch (math) {
    case '+':
        result = num1 + num2;
        cout << "result: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "result: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "result: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "result: " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero" << endl;
        }
        break;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
