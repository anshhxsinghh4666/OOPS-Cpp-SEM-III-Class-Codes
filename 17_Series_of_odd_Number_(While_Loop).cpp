// WAP to print series of odd numbers betweeen 1 to 20 using while loop


#include <iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=20){
        if(i%2!=0){
            cout<<i<<endl;
        }
        i++;
    }

    return 0;

}

/*
OUTPUT : 
anshkumarsingh@Anshs-MacBook-Air-2 output % ./"17_Series_of_odd_Number_(While_Loop)"
1
3
5
7
9
11
13
15
17
19
*/