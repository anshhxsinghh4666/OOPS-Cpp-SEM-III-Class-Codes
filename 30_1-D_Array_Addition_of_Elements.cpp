// WAP to accept 10 numbers from user and display the addition.

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Addition : " << sum << endl;

    return 0;
}



/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"30_1-D_Array_Addition_of_Elements"
Enter Element 1 : 34
Enter Element 2 : 53
Enter Element 3 : 6
Enter Element 4 : 4
Enter Element 5 : 32
Enter Element 6 : 5
Enter Element 7 : 46
Enter Element 8 : 35
Enter Element 9 : 45
Enter Element 10 : 4623
Addition : 4883
*/