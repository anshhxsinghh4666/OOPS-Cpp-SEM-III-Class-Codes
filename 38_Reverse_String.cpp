// WAP to input and Reverse a string

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

    for (int i = 0; i < len / 2; i++) {
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    cout << "Reverse String : " << arr << endl;
}