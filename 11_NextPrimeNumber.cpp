#include<bits/stdc++.h>
using namespace std;

int nextPrime(int n){
    // we will increment the number so that we can run the loop from 2 to the next number for checking prime.
    n++;
    while(true){
        int i;
        for(i = 2 ; i<n ; i++){
            if(n%i == 0 ){
                break;
            }
        }
        // if the number is not found prime this condition will become true and we will get the output.

        // remember though the loop will run from 2 to less than n  , i will reach the value of n if not prime because the condition will be false and hence it will check for (i=7, ie 7<7).
        if(i==n){
            return n;
        }
        // if the number is not fount prime it will increment the number.
        n++;
    }
}

int main(){
    int n;
    cout<<"Enter the number to find the next prime number: ";
    cin>>n;
    cout<<"The next prime number is: "<<nextPrime(n);
    return 0;
}
