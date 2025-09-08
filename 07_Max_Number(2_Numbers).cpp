// WAP to extract 2 numbers from user and find the maximum


#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    // Using else if (ladder if)
    if (num1 > num2) {
        cout << "Maximum (else if / ladder if) is : " << num1 << endl;
    } else if (num2 > num1) {
        cout << "Maximum (else if / ladder if) is : " << num2 << endl;
    } else {
        cout << "Both numbers are equal (else if / ladder if)" << endl;
    }

    // Using nested if
    if (num1 > num2) {
        cout << "Maximum (nested if) is : " << num1 << endl;
    } else {
        if (num2 > num1) {
            cout << "Maximum (nested if) is : " << num2 << endl;
        } else {
            cout << "Both numbers are equal (nested if)" << endl;
        }
    }

    return 0;
}


/*
OUTPUT : 
Enter num1 : 5
Enter num2 : 8
Maximum (else if / ladder if) is : 8
Maximum (nested if) is : 8
*/