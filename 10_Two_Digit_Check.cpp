// WAP to extract a number from user and check if it is a two digit number :
// Using else if, ladder if, nested if, and switch

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using else if (ladder if)
    if (num >= 10 && num <= 99) {
        cout << "Two digit (else if / ladder if)" << endl;
    } else if (num <= -10 && num >= -99) {
        cout << "Two digit (else if / ladder if)" << endl;
    } else {
        cout << "Not two digit (else if / ladder if)" << endl;
    }

    // Using nested if
    if (num >= 10 && num <= 99) {
        cout << "Two digit (nested if)" << endl;
    } else {
        if (num <= -10 && num >= -99) {
            cout << "Two digit (nested if)" << endl;
        } else {
            cout << "Not two digit (nested if)" << endl;
        }
    }

    /*
    Using switch (by counting digits)
    int absNum = num < 0 ? -num : num;
    int digits = 0;
    if (absNum == 0)
        digits = 1;
    else {
        int temp = absNum;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }
    switch (digits) {
        case 2:
            cout << "Two digit (switch)" << endl;
            break;
        default:
            cout << "Not two digit (switch)" << endl;
            break;
    }
    */

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"10_Two_Digit_Check"
Enter a number: 5
Not two digit (else if / ladder if)
Not two digit (nested if)
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"10_Two_Digit_Check"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"10_Two_Digit_Check"
Enter a number: 42
Two digit (else if / ladder if)
Two digit (nested if)
*/