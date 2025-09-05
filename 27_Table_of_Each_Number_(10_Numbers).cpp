// WAP to accept 10 numbers in loop and display table of each number.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        int num;
        cout << "Enter Number " << i + 1 << " : ";
        cin >> num;
        cout << "Table of " << num << " : " << endl;
        for (int j = 1; j <= 10; j++) {
            cout << num << " * " << j << " = " << num * j << endl;
        }
    }
    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"27_Table_of_Each_Number_(10_Numbers)"
Enter Number 1 : 3
Table of 3 : 
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30
Enter Number 2 : 4
Table of 4 : 
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
4 * 7 = 28
4 * 8 = 32
4 * 9 = 36
4 * 10 = 40
Enter Number 3 : 5
Table of 5 : 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
Enter Number 4 : 6
Table of 6 : 
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60
Enter Number 5 : 7
Table of 7 : 
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
Enter Number 6 : 8
Table of 8 : 
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
8 * 9 = 72
8 * 10 = 80
Enter Number 7 : 9
Table of 9 : 
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90
Enter Number 8 : 2
Table of 2 : 
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
Enter Number 9 : 11
Table of 11 : 
11 * 1 = 11
11 * 2 = 22
11 * 3 = 33
11 * 4 = 44
11 * 5 = 55
11 * 6 = 66
11 * 7 = 77
11 * 8 = 88
11 * 9 = 99
11 * 10 = 110
Enter Number 10 : 77
Table of 77 : 
77 * 1 = 77
77 * 2 = 154
77 * 3 = 231
77 * 4 = 308
77 * 5 = 385
77 * 6 = 462
77 * 7 = 539
77 * 8 = 616
77 * 9 = 693
77 * 10 = 770
*/