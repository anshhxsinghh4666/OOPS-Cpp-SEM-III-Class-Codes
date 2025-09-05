// WAP to Display all even numbers
#include <iostream>
using namespace std;

int main() {
    int num;
    int even[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> num;

        if (num % 2 == 0) {
            even[count] = num;
            count++;
        }
    }

    cout << "\nEven Numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"24_Even_Number_(10_Numbers)"
Enter Number 1 : 4
Enter Number 2 : 5
Enter Number 3 : 6
Enter Number 4 : 7
Enter Number 5 : 8
Enter Number 6 : 9
Enter Number 7 : 11
Enter Number 8 : 3
Enter Number 9 : 6
Enter Number 10 : 8

Even Numbers are: 4 6 8 6 8 
*/