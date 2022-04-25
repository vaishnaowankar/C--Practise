// Remember fibonacci has a application in finding the no of ways to reach a particular stair in a staircase (when you are allwed to skip only 1 stair.)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter how many fibonacci sequences you want: ";
    cin>>n;
    int a = 1;
    int b = 1;
    int c = 0;
    cout<<"1 1 ";
    // we start from 1 1 as it resembles the staircase problem.
    for(int i = 2 ; i<n ; i++){
        c = a+b;
        cout<<c<<" ";        
        a=b;
        b=c;
    }
    return 0;
}

