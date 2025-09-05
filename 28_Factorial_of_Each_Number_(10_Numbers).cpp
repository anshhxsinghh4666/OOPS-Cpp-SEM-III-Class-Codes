// WAP to accept 10 numbers in loop and display table of each number.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        int num;
        cout << "Enter Number " << i + 1 << " : ";
        cin >> num;
        cout << "Facorial of " << i + 1 << " : ";
        int fact = 1;
        for (int j = num; j > 0; j--) {
            fact *= j;
        }
        cout << fact << endl;
    }
    return 0;
}

/*
OUTPUT : 
Enter Number 1 : 1
Facorial of 1 : 1
Enter Number 2 : 2
Facorial of 2 : 2
Enter Number 3 : 3
Facorial of 3 : 6
Enter Number 4 : 4
Facorial of 4 : 24
Enter Number 5 : 5
Facorial of 5 : 120
Enter Number 6 : 6
Facorial of 6 : 720
Enter Number 7 : 7
Facorial of 7 : 5040
Enter Number 8 : 8
Facorial of 8 : 40320
Enter Number 9 : 9
Facorial of 9 : 362880
Enter Number 10 : 11
Facorial of 10 : 39916800
*/