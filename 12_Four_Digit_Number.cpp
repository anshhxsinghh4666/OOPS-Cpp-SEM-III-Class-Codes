// WAP to extract a number from the user and check if it is 4 digit or not.
// Check the sum of 1st and 2nd digit should be greater than sum of 3rd and 4th digit.
// Sum of all digits should be even and check if it is single digit or not


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if it is a 4-digit number
    if (num >= 1000 && num <= 9999) {
        cout << "It is a 4-digit number." << endl;

        // Extract digits
        int digit1 = num / 1000;
        int digit2 = (num / 100) % 10;
        int digit3 = (num / 10) % 10;
        int digit4 = num % 10;

        // Check the sum of 1st and 2nd digit
        if (digit1 + digit2 > digit3 + digit4) {
            cout << "Sum of 1st and 2nd digit is greater than 3rd and 4th digit." << endl;
        } else {
            cout << "Sum of 1st and 2nd digit is not greater than 3rd and 4th digit." << endl;
        }

        // Check if the sum of all digits is even
        int sum = digit1 + digit2 + digit3 + digit4;
        if (sum % 2 == 0) {
            cout << "Sum of all digits is even." << endl;
        } else {
            cout << "Sum of all digits is odd." << endl;
        }

        // Check if it is a single digit
        if (num >= 0 && num < 10) {
            cout << "It is a single digit number." << endl;
        } else {
            cout << "It is not a single digit number." << endl;
        }
    } else {
        cout << "It is not a 4-digit number." << endl;
    }

    return 0;
}


/*
OUTPUT : 
Enter a number: 5
It is not a 4-digit number.
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"12_Four_Digit_Number"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"12_Four_Digit_Number"
Enter a number: 9999
It is a 4-digit number.
Sum of 1st and 2nd digit is not greater than 3rd and 4th digit.
Sum of all digits is even.
It is not a single digit number.
*/