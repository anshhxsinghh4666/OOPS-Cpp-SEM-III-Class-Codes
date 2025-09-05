/*
WAP to create a function :

1. Fibonacci Series 
2. Armstrong 
3. Palindrome
4. Prime
5. Calculate power
6. factorial Number 
7. Max No.
*/

#include <math.h>

#include <iostream>
using namespace std;

int fib() {
    int n, t1 = 0, t2 = 1, nextTerm;

    // Input number of terms
    cout << "Enter Number of Terms (Fibonacci) : ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer \n";
        return 0;
    }

    cout << "Fibonacci Series: \n";

    for (int i = 1; i <= n; i++) {
        cout << t1;
        nextTerm = t1 + t2;  // Calculate the next term
        t1 = t2;  // Update t1 to t2
        t2 = nextTerm;  // Update t2 to nextTerm
    }

    cout << endl;
}

void armstrong() {
    char num[100];
    cout << "Enter Number (Armstrong) : ";
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
}

void palindrome() {
    char num[100], cpy[100];

    cout << "Enter Number (Palindrome) : ";
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
}

void prime() {
    int n;
    cout << "Enter Number (Prime) : " << endl;
    cin >> n;
    int isprime = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isprime = 0;
            break;
        }
    }

    if (isprime == 1) {
        cout << n << " is a Prime Number." << endl;
    } else {
        cout << n << " is NOT a Prime Number." << endl;
    }
}

void calculate() {
    int n, exp;
    cout << "Enter Number : ";
    cin >> n;
    cout << "Enter Exponent : ";
    cin >> exp;
    cout << "Power : " << pow(n, exp) << endl;
}

void factorial() {
    int num;
    cout << "Enter Number : ";
    cin >> num;
    int fact = 1;
    for (int j = num; j > 0; j--) {
        fact *= j;
    }
    cout << "Factorial : " << fact << endl;
}

void maxNo() {
    int n, max = 0;
    printf("Enter Number of Elements : ");
    cin >> n;

    for (int i = 0; i < n; i++) {
        int j = 0;
        cin >> j;
        if (j > max) {
            max = j;
        }
    }
    cout << "Max No. : " << max << endl;
}

int main() {
    int choice;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Fibonacci Series\n";
        cout << "2. Armstrong Number\n";
        cout << "3. Palindrome\n";
        cout << "4. Prime Number\n";
        cout << "5. Calculate Power\n";
        cout << "6. Factorial\n";
        cout << "7. Maximum Number\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                fib();
                break;
            case 2:
                armstrong();
                break;
            case 3:
                palindrome();
                break;
            case 4:
                prime();
                break;
            case 5:
                calculate();
                break;
            case 6:
                factorial();
                break;
            case 7:
                maxNo();
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 8);

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"35_Functions"

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 1
Enter Number of Terms (Fibonacci) : 9
Fibonacci Series: 
01123581321

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 2
Enter Number (Armstrong) : 371
371 is an Armstrong number.

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 3
Enter Number (Palindrome) : 989
It is a Palindrome

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 4
Enter Number (Prime) : 
11
11 is a Prime Number.

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 5
Enter Number : 4
Enter Exponent : 11
Power : 4.1943e+06

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 6
Enter Number : 4
Factorial : 24

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 7
Enter Number of Elements : 5
2
3
4
5
56
Max No. : 56

===== MENU =====
1. Fibonacci Series
2. Armstrong Number
3. Palindrome
4. Prime Number
5. Calculate Power
6. Factorial
7. Maximum Number
8. Exit
Enter your choice: 8
Exiting...*/