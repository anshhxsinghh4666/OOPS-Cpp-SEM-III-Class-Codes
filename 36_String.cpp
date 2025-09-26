// STRING : Input / Output 


#include <iostream>
using namespace std;

int main() {
    char arr1[100];
    char arr2[100];

    // For A Word :
    cout << "Enter String (Word) : ";
    cin >> arr1;

    cin.ignore();
    /* If I didn't use cin.ignore(); then I'll not able to enter data in next cin beacuse 
    Issue
    After using cin >> arr1;, the newline character (\n) remains in the input buffer.
    So, cin.getline(arr2, 100); reads an empty line.
    */

    // Line with Spaces :
    cout << "Enter String (with spaces) : ";
    cin.getline(arr2, 100);

    cout << "Word: " << arr1 << endl;
    cout << "Line: " << arr2 << endl;

    return 0;
}


/*
NOTE : 
When you use cin >> arr1;, it only reads up to the first space.
So, if you enter Ansh Kumar Singh, arr1 will only contain Ansh.

The rest (Kumar Singh) stays in the input buffer and is read by cin.getline(arr2, 100);, so arr2 gets Kumar Singh.
*/