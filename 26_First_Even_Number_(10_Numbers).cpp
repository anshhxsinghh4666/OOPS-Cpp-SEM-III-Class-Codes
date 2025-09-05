// WAP to accept 10 numbers in loop and display the first even number.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        int num;
        cout << "Enter Number " << i + 1 << " : ";
        cin >> num;

        if (num % 2 == 0) {
            cout << "First Even Number : " << num << endl;
            break;
        }
    }

    return 0;
}

/*
OUTPUT : 
Enter Number 1 : 3
Enter Number 2 : 5
Enter Number 3 : 7
Enter Number 4 : 4
First Even Number : 4
*/