#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n){
  string s = "";

  while(n>0){
    int rem = n % 2;
    // to_string function is used to convert int to string.
    s = s + to_string(rem);
    n = n/2;
  }

  // reverse (from which index to which index);
  // Here reverse from beginning of string to end of string.
  reverse(s.begin(),s.end());
  return s;
}

int main(){
  int n;
  cout<<"Enter a decimal number: ";
  cin>>n;

  string ans  = decimal_to_binary(n);
  cout<<ans;

  return 0;

}