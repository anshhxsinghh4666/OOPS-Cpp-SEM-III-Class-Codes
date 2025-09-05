// WAP to accept 10 numbers from user and count 2 digit even number

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
        if (arr[i] % 2 == 0 && arr[i] >= 10 && arr[i] < 100) {
            count++;
        }
    }

    cout << "Number of Even 2 Digit Numbers : " << count << endl;

    return 0;
}


/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"31_Count_2_Digit_Even_No._Array"
Enter Element 1 : 33
Enter Element 2 : 44
Enter Element 3 : 55
Enter Element 4 : 66
Enter Element 5 : 77
Enter Element 6 : 88
Enter Element 7 : 1
Enter Element 8 : 2
Enter Element 9 : 3
Enter Element 10 : 4
Number of Even 2 Digit Numbers : 3
*/