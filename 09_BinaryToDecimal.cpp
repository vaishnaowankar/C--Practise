#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter binary number to be converted to decimal: ";
    cin>>n;

    int val = 0;
    int base = 1;

    while(n>0){
        // 1. Extract the last digit
        int last_digit = n%10;
        // 2. Multiply the extracted digit with 2^i (which overall constitutes to base in our case (ex 2^0 = 1))
        val = val + (last_digit * base);
        // Remove the last digit from the binary number
        n = n/10;
        // Multiply the base by 2 to move to one position ahead (1 , 2 , 4 .....)
        base = base * 2;
    }
    cout<<"The decimal value is: "<<val;
}

