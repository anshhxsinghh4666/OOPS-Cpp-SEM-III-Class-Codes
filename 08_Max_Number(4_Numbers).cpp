// WAP to extract 4 numbers from user and find the maximum using else if, ladder if, nested if, and switch

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;

    // Using else if (ladder if)
    if (a >= b && a >= c && a >= d) {
        cout << "Maximum (else if / ladder if): " << a << endl;
    } else if (b >= a && b >= c && b >= d) {
        cout << "Maximum (else if / ladder if): " << b << endl;
    } else if (c >= a && c >= b && c >= d) {
        cout << "Maximum (else if / ladder if): " << c << endl;
    } else {
        cout << "Maximum (else if / ladder if): " << d << endl;
    }

    // Using nested if
    int maxNested = a;
    if (b > maxNested) {
        maxNested = b;
    }
    if (c > maxNested) {
        maxNested = c;
    }
    if (d > maxNested) {
        maxNested = d;
    }
    cout << "Maximum (nested if): " << maxNested << endl;

    return 0;
}


/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"8_Max_Number(4_Numbers)"
Enter 4 numbers: 3
4
5
6
Maximum (else if / ladder if): 6
Maximum (nested if): 6
*/