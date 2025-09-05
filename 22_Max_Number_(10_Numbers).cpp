// WAP to accept 10 numbers and find its maximum

#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int max = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    cout << "Maximum Number is: " << max << endl;

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"22_Max_Number_(10_Numbers)"
1Enter Number 1 : 1
Enter Number 2 : 33
Enter Number 3 : 5
Enter Number 4 : 5
Enter Number 5 : 6
Enter Number 6 : 33
Enter Number 7 : 6
Enter Number 8 : 8
Enter Number 9 : 33
Enter Number 10 : 11
Maximum Number is: 33
*/