// WAP to find Area :
// Enter 1 : Area of Circle
// Enter 2 : Circumference of Circle
// Enter 3 : Area of triangle
// Enter 4 : Perimeter of Triangle

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter choice:\n";
    cout << "1 : Area of Circle\n";
    cout << "2 : Circumference of Circle\n";
    cout << "3 : Area of Triangle\n";
    cout << "4 : Perimeter of Triangle\n";
    cin >> choice;

    double area, peri, r, a, b, c, s;

    // Using else if (ladder if)
    if (choice == 1) {
        cout << "Enter radius: ";
        cin >> r;
        area = M_PI * r * r;
        cout << "Area of Circle (else if / ladder if): " << area << endl;
    } else if (choice == 2) {
        cout << "Enter radius: ";
        cin >> r;
        peri = 2 * M_PI * r;
        cout << "Circumference of Circle (else if / ladder if): " << peri << endl;
    } else if (choice == 3) {
        cout << "Enter sides a, b, c: ";
        cin >> a >> b >> c;
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle (else if / ladder if): " << area << endl;
    } else if (choice == 4) {
        cout << "Enter sides a, b, c: ";
        cin >> a >> b >> c;
        peri = a + b + c;
        cout << "Perimeter of Triangle (else if / ladder if): " << peri << endl;
    } else {
        cout << "Invalid choice (else if / ladder if)" << endl;
    }

    /* Using nested if
    if (choice == 1)
    {
        cout << "Enter radius: ";
        cin >> r;
        area = M_PI * r * r;
        cout << "Area of Circle (nested if): " << area << endl;
    }
    else
    {
        if (choice == 2)
        {
            cout << "Enter radius: ";
            cin >> r;
            peri = 2 * M_PI * r;
            cout << "Circumference of Circle (nested if): " << peri << endl;
        }
        else
        {
            if (choice == 3)
            {
                cout << "Enter sides a, b, c: ";
                cin >> a >> b >> c;
                s = (a + b + c) / 2.0;
                area = sqrt(s * (s - a) * (s - b) * (s - c));
                cout << "Area of Triangle (nested if): " << area << endl;
            }
            else
            {
                if (choice == 4)
                {
                    cout << "Enter sides a, b, c: ";
                    cin >> a >> b >> c;
                    peri = a + b + c;
                    cout << "Perimeter of Triangle (nested if): " << peri << endl;
                }
                else
                {
                    cout << "Invalid choice (nested if)" << endl;
                }
            }
        }
    }
        */

    // Using switch
    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> r;
            area = M_PI * r * r;
            cout << "Area of Circle (switch): " << area << endl;
            break;
        case 2:
            cout << "Enter radius: ";
            cin >> r;
            peri = 2 * M_PI * r;
            cout << "Circumference of Circle (switch): " << peri << endl;
            break;
        case 3:
            cout << "Enter sides a, b, c: ";
            cin >> a >> b >> c;
            s = (a + b + c) / 2.0;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            cout << "Area of Triangle (switch): " << area << endl;
            break;
        case 4:
            cout << "Enter sides a, b, c: ";
            cin >> a >> b >> c;
            peri = a + b + c;
            cout << "Perimeter of Triangle (switch): " << peri << endl;
            break;
        default:
            cout << "Invalid choice (switch)" << endl;
            break;
    }

    return 0;
}



/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"15_Area_&_Perimeter"
Enter choice:
1 : Area of Circle
2 : Circumference of Circle
3 : Area of Triangle
4 : Perimeter of Triangle
1
Enter radius: 4
Area of Circle (else if / ladder if): 50.2655
Enter radius: 4
Area of Circle (switch): 50.2655
*/