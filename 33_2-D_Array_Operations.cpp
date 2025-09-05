// WAP to print 3x3 Matrix :

/*
10  1   2
10  11  12
30  21  22
*/

/*
1. Add all numbers and display the sum 
2. Count all +ve and -ve numbedrs 
3. Display max Numbers 
4. Count all prime no. 
5. count all Palindrome numbers
6. Count all Armstrong Numbers 
7. Sum of Each row 
8. Sum of Diagonal Row
9. Transpose of Matrix
10. Sort elements in ascending order 
*/

#include <array>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[3][3] = {{10, 1, 2}, {10, 11, 12}, {30, 21, 22}};

    // 1. Add all numbers and display the sum :
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all Numbers : " << sum << endl;

    cout << endl;
    // 2. Count all +ve and -ve numbers
    int cp = 0, cn = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > 0) {
                cp++;
            } else if (arr[i][j] < 0) {
                cn++;
            }
        }
    }
    cout << "+ve Numbers : " << cp << endl;
    cout << "-ve Numbers : " << cn << endl;

    cout << endl;
    // 3. Display max Numbers
    int max = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum Number : " << max << endl;

    cout << endl;
    // 4. Count all prime no. :
    int isprime = 1;
    int countpr = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            isprime = 1;
            for (int k = 2; k <= sqrt(arr[i][j]); k++) {
                if (arr[i][j] % k == 0) {
                    isprime = 0;
                    break;
                }
            }
        }
        if (isprime == 1) {
            countpr++;
        }
    }
    cout << "Prime Numbers : " << countpr << endl;

    cout << endl;
    // 5. count all Palindrome numbers
    int palin = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            string str = to_string(arr[i][j]);
            string rev = str;
            reverse(rev.begin(), rev.end());
            if (str == rev) {
                palin++;
            }
        }
    }
    cout << "Palindrome Numbers : " << palin << endl;

    cout << endl;
    // 6. Count all Armstrong Numbers :
    int arm = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int len = 0, sum = 0;
            int temp = arr[i][j];
            while (temp != 0) {
                temp /= 10;
                len++;
            }
            temp = arr[i][j];
            while (temp != 0) {
                int digit = temp % 10;
                sum += pow(digit, len);
                temp /= 10;
            }
            if (sum == arr[i][j]) {
                arm++;
            }
        }
    }
    cout << "Armstrong Numbers : " << arm << endl;

    cout << endl;
    // 7. Sum of Each row
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of Row " << i + 1 << " : " << sum << endl;
    }

    cout << endl;
    // 8. Sum of Diagonal Row
    int firstDiag = 0, secDiag = 0;
    for (int i = 0; i < 3; i++) {
        firstDiag += arr[i][i];
        secDiag += arr[i][2 - i];
    }
    cout << "Sum of First Diagonal : " << firstDiag << endl;
    cout << "Sum of Second Diagonal : " << secDiag << endl;

    cout << endl;
    // 9. Transpose of Matrix :
    int arrcpy[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arrcpy[j][i] = arr[i][j];
            cout << arrcpy[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    // 10. Sort elements in ascending order :
    int temp[9], k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[k++] = arr[i][j];
        }
    }
    sort(temp, temp + 9);
    k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = temp[k++];
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"33_2-D_Array_Operations"
Sum of all Numbers : 119

+ve Numbers : 9
-ve Numbers : 0

Maximum Number : 30

Prime Numbers : 1

Palindrome Numbers : 4

Armstrong Numbers : 2

Sum of Row 1 : 13
Sum of Row 2 : 33
Sum of Row 3 : 73

Sum of First Diagonal : 43
Sum of Second Diagonal : 43

10      0       -1981535536
1       11      1
2       12      22

1       2       10
10      11      12
21      22      30
*/