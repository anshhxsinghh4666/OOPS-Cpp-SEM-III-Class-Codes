// CALCULATE THE LENGHT OF STRING :

#include <iostream>
using namespace std;

int main() {
    char arr[100];

    cout << "Enter String : ";
    cin.getline(arr, 100);

    int len = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        len++;
    }

    cout << "Length of String : " << len << endl;
}