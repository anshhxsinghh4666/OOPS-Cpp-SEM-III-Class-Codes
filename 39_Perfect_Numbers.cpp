/*
PERFECT NUMBERS : 

-> Prime Number 
-> Armstrong 
-> Palindrome
-> Fibonacci
-> Factorial

*/

#include <cstring>
#include <iostream>
using namespace std;

void prime(int n) {
    int isPrime = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0) {
        cout << "Not a Prime Number\n";
    } else {
        cout << "Is a Prime Number\n";
    }
}

void Armstrong() {
    char n[100];
    cout << "Enter Number : ";
    cin >> n;

    int count = 0, c = 0;
    int len = strlen(n);

    for (int i = 0; i < len; i++) {
        if (isdigit(n[i])) {
            int digit = n[i] - '0';
            count += pow(digit, len);
            c = c * 10 + digit;
        }
    }
    if (c == count) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not An Armstrong Number" << endl;
    }
}

void Palindrome() {
    char num[100];
    cout << "Enter Number : ";
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
        cout << num << " Is a Palindrome " << endl;
    } else {
        cout << num << " Is Not a Palindrome" << endl;
    }
}

void Fibonacci() {
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid Input";
        return;
    }

    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 0; i < n; i++) {
        cout << t1 << "\t";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

void factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact << endl;
}

int main() {
    prime(11);

    Armstrong();

    Palindrome();

    Fibonacci();

    factorial(10);

    return 0;
}


/*
OUTPUT : 

anshkumarsingh@Anshs-MacBook-Air-2 output % ./"39_Perfect_Numbers"
Is a Prime Number
Enter Number : 3
Armstrong Number
Enter Number : 321
321 Is Not a Palindrome
Enter Number of Elements : 5
0       1       1       2       3
Factorial of 10 = 3628800
*/