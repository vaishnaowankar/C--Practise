#include<bits/stdc++.h>
using namespace std;

int first_digit(int n)
{
    while(n>9)
    {
        n=n/10;
    }
    return n;
}

int main()
{
    int n;
    cin>>n;
    cout<<first_digit(n);
    return 0;
}