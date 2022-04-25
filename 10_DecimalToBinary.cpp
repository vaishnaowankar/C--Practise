#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
// we will create a vector to store the remainders.
    vector<int> v;


    while(n>0){
        // going with the basic logic , we will divide the number by 2 and store the remainter in the vector using push_back() function.
        int t = n % 2;
        v.push_back(t);

        n = n/2;
    }

    //Then we will iterate throught the vector backwards which will print the binary number of the given decimal number.

    for(int i = v.size()-1 ; i>=0 ; i--){
        cout<<v[i];
    }
}
