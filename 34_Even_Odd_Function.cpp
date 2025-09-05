// WAP to create a function which check even or odd

#include <iostream>
using namespace std;

// Function Decalaration :
void evenOdd(int n);

// Function Call :
int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    evenOdd(n);

    return 0;
}

// Function Definition :
void evenOdd(int n) {
    if (n % 2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"34_Even_Odd_Function"
Enter Number : 4
Even
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"34_Even_Odd_Function"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"34_Even_Odd_Function"
Enter Number : 11
Odd
*/