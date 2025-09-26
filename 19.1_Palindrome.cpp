// Write a program to check whether a given integer number is palindrome or not.

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char num[100], cpy[100];

    cout << "Enter Number: ";
    cin >> num;
    int n = strlen(num);

    strcpy(cpy, num);

    for (int i = 0; i < n / 2; i++) {
        int firstval = cpy[i];
        int revFirstval = cpy[n - i - 1];
        cpy[i] = revFirstval;
        cpy[n - i - 1] = firstval;
    }

    if (strcmp(cpy, num) == 0) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is NOT a Palindrome" << endl;
    }

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"19_Palindrome"
Enter Number: 5
It is a Palindrome
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"19_Palindrome"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"19_Palindrome"
Enter Number: 989
It is a Palindrome
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"19_Palindrome"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"19_Palindrome"
Enter Number: 234
It is NOT a Palindrome
*/
