// WAP to build a calculator using else if, ladder if, nested if, and switch

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result = 0;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Using else if (ladder if)
    if (op == '+') {
        result = num1 + num2;
        cout << "Result (else if / ladder if): " << result << endl;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "Result (else if / ladder if): " << result << endl;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "Result (else if / ladder if): " << result << endl;
    } else if (op == '/') {
        if (num2 != 0)
            result = num1 / num2;
        else
            cout << "Division by zero error (else if / ladder if)" << endl;
        cout << "Result (else if / ladder if): " << result << endl;
    } else {
        cout << "Invalid operator (else if / ladder if)" << endl;
    }

    // Using nested if
    if (op == '+') {
        result = num1 + num2;
        cout << "Result (nested if): " << result << endl;
    } else {
        if (op == '-') {
            result = num1 - num2;
            cout << "Result (nested if): " << result << endl;
        } else {
            if (op == '*') {
                result = num1 * num2;
                cout << "Result (nested if): " << result << endl;
            } else {
                if (op == '/') {
                    if (num2 != 0)
                        result = num1 / num2;
                    else
                        cout << "Division by zero error (nested if)" << endl;
                    cout << "Result (nested if): " << result << endl;
                } else {
                    cout << "Invalid operator (nested if)" << endl;
                }
            }
        }
    }

    // Using switch
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result (switch): " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result (switch): " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result (switch): " << result << endl;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else
                cout << "Division by zero error (switch)" << endl;
            cout << "Result (switch): " << result << endl;
            break;
        default:
            cout << "Invalid operator (switch)" << endl;
            break;
    }

    return 0;
}


/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"14_Calculator"
Enter first number: 4
Enter operator (+, -, *, /): +
Enter second number: 9
Result (else if / ladder if): 13
Result (nested if): 13
Result (switch): 13
*/