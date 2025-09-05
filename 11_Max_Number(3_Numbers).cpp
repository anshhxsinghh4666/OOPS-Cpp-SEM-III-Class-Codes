// WAP to extract 3 numbers from user and find the maximum number :
// Using else if, ladder if, nested if, and switch

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    // Using else if (ladder if)
    if (a >= b && a >= c) {
        cout << "Maximum (else if / ladder if): " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Maximum (else if / ladder if): " << b << endl;
    } else {
        cout << "Maximum (else if / ladder if): " << c << endl;
    }

    // Using nested if
    int maxNested = a;
    if (b > maxNested) {
        maxNested = b;
    }
    if (c > maxNested) {
        maxNested = c;
    }
    cout << "Maximum (nested if): " << maxNested << endl;

    return 0;
}


/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"11_Max_Number(3_Numbers)"
Enter 3 numbers: 4
5
6
Maximum (else if / ladder if): 6
Maximum (nested if): 6
*/