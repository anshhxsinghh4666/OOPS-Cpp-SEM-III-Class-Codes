// WAP to accept 10 numbers from user and count all perfect numbers : Armstrong , Palindrome , Prime 

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool armstrong(int arr) {
    int len = 0, sum = 0;
    int temp = arr;

    while (temp != 0) {
        temp /= 10;
        len++;
    }

    temp = arr;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, len);
        temp /= 10;
    }
    if (sum == arr) {
        return true;
    }
    return false;
}

bool palindrome(int arr) {
    string str = to_string(arr);
    string rev = str;

    reverse(rev.begin(), rev.end());

    if (rev == str) {
        return true;
    }

    return false;
}

bool prime(int arr) {
    if (arr <= 1)
        return false;
    for (int i = 2; i <= sqrt(arr); i++) {
        if (arr % i == 0)
            return false;
    }
    return true;
}

int main() {
    int arr[10];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int ca = 0, cp = 0, cpr = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (armstrong(arr[i]))
            ca++;
        if (palindrome(arr[i]))
            cp++;
        if (prime(arr[i]))
            cpr++;
    }

    cout << "Count of Armstrong numbers: " << ca << endl;
    cout << "Count of Palindrome numbers: " << cp << endl;
    cout << "Count of Prime numbers: " << cpr << endl;

    return 0;
}



/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"32_Count_Perfect_Numbers"
Enter number 1: 757
Enter number 2: 3
Enter number 3: 6
Enter number 4: 7
Enter number 5: 371
Enter number 6: 371
Enter number 7: 222
Enter number 8: 213
Enter number 9: 11
Enter number 10: 1
Count of Armstrong numbers: 6
Count of Palindrome numbers: 7
Count of Prime numbers: 4
anshkumarsingh@Anshs-MacBook-Air-2 output % 
*/