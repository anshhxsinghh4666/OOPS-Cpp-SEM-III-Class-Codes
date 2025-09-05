// Write a program to check whether the given number is Armstrong or not.
// An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
// For example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.

#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char num[100];
    cout << "Enter Number : ";
    cin >> num;

    int len = strlen(num);
    int count = 0;
    int c = 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(num[i])) {
            int digit = num[i] - '0';
            count += pow(digit, 3);
            c = c * 10 + digit;
        }
    }

    if (c == count) {
        cout << c << " is an Armstrong number." << endl;
    } else {
        cout << c << " is not an Armstrong number." << endl;
    }
    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"20_Armstrong"
Enter Number : 5
5 is not an Armstrong number.
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"20_Armstrong"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"20_Armstrong"
Enter Number : 371
371 is an Armstrong number.
*/