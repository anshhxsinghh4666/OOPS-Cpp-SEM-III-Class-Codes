// WAP to check the number is a prime number or not 


#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter Number : "<<endl;
    cin >>n;
    int isprime = 1;

    for(int i=2; i<=n/2 ; i++){
        if(n%i == 0){
            isprime=0;
            break;
        }
    }

    if(isprime==1){
        cout <<n << " is a Prime Number." << endl;
    }
    else {
        cout <<n<<" is NOT a Prime Number." << endl;
    }

    return 0;
}

/*
OUTPUT : 
Enter Number : 
4
4 is NOT a Prime Number.
anshkumarsingh@Anshs-MacBook-Air-2 output % cd "/Users/anshkumarsingh/Desktop/SEM III Class Code/OOPS/output"
./"21_Prime_Number"
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"21_Prime_Number"
Enter Number : 
11
11 is a Prime Number.
*/