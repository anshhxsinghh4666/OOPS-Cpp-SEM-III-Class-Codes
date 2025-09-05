// WAP to check if number is even or odd :

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using if-else
    if (num % 2 == 0) {
        cout << num << " is even (if-else)" << endl;
    } else {
        cout << num << " is odd (if-else)" << endl;
    }

    // Using ladder if
    if (num % 2 == 0)
        cout << num << " is even (ladder if)" << endl;
    else if (num % 2 != 0)
        cout << num << " is odd (ladder if)" << endl;

    // Using nested if
    if (num % 2 == 0) {
        cout << num << " is even (nested if)" << endl;
    } else {
        if (num % 2 != 0) {
            cout << num << " is odd (nested if)" << endl;
        }
    }

    return 0;
}



/*
OUTPUT : 
Enter a number: 5
5 is odd (if-else)
5 is odd (ladder if)
5 is odd (nested if)
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/S
EM III Class Code/OOPS/output"
./"6_Even_Or_Odd"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"6_Even_Or_Odd"
Enter a number: 4
4 is even (if-else)
4 is even (ladder if)
4 is even (nested if)
*/