// PALINDROME :

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char num[100];
    cout << "Enter Number: ";
    cin >> num;
    int n = strlen(num);

    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (num[i] != num[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is NOT a Palindrome" << endl;
    }

    return 0;
}