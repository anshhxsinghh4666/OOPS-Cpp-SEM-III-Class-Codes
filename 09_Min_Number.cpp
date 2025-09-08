// WAP to extract 3 numbers from user and find the minimum using else if, ladder if, nested if, and switch

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    // Using else if (ladder if)
    if (a <= b && a <= c) {
        cout << "Minimum (else if / ladder if): " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "Minimum (else if / ladder if): " << b << endl;
    } else {
        cout << "Minimum (else if / ladder if): " << c << endl;
    }

    // Using nested if
    int minNested = a;
    if (b < minNested) {
        minNested = b; 
    }
    if (c < minNested) {
        minNested = c;
    }
    cout << "Minimum (nested if): " << minNested << endl;

    return 0;
}


/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"9_Min_Number"
Enter 3 numbers: 5
6
7
Minimum (else if / ladder if): 5
Minimum (nested if): 5
*/