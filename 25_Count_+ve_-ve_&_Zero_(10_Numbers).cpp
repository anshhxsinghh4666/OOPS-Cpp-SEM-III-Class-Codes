// WAP to accept 10 numbers in loop and count the number of positive , negative and Zero.

#include <iostream>
using namespace std;

int main() {
    int num;
    int i = 0;
    int even = 0, odd = 0, zero = 0;

    while (i < 10) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> num;
        if (num == 0) {
            zero++;
        } else if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        i++;
    }
    cout << "Total Even Numbers : " << even << endl;
    cout << "Total Odd Numbers : " << odd << endl;
    cout << "Total Zeros : " << zero << endl;

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"25_Count_+ve_-ve_&_Zero_(10_Numbers)"
Enter Number 1 : 1
Enter Number 2 : 2
Enter Number 3 : 3
Enter Number 4 : 4
Enter Number 5 : 5
Enter Number 6 : 5
Enter Number 7 : 6
Enter Number 8 : 7
Enter Number 9 : 7
Enter Number 10 : 8
Total Even Numbers : 4
Total Odd Numbers : 6
Total Zeros : 0
*/