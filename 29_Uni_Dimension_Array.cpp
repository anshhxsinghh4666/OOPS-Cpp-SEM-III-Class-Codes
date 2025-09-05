// WAP to print unique dimensional array upto 5

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Element " << i + 1 << " is : " << arr[i] << endl;
    }

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"29_Uni_Dimension_Array"
Enter Element 1: 5
Enter Element 2: 6
Enter Element 3: 7
Enter Element 4: 8
Enter Element 5: 9
Element 1 is : 5
Element 2 is : 6
Element 3 is : 7
Element 4 is : 8
Element 5 is : 9
*/