// WAP to enter 10 numbers and print its sum using while loop

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int n;
    int sum = 0;
    while (i <= 10) {
        cout << "Enter Number : ";
        cin >> n;
        sum += n;
        i++;
    }

    cout << "Sum : " << sum << endl;

    return 0;
}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"18_Sum_of_Entered_Numbers_(While_Loop)"
Enter Number : 5
Enter Number : 6
Enter Number : 7
Enter Number : 8
Enter Number : 89
Enter Number : 2
Enter Number : 4
Enter Number : 6
Enter Number : 8
Enter Number : 11
Enter Number : 33
Sum : 179

*/