#include<bits/stdc++.h>
using namespace std;

void binary_to_decimal(string s){
    int base = 1;
    int ans = 0;

    int size = s.length();

    for(int i = size-1 ; i >= 0; i-- ){
      // Remember (int)(s[i]-'0') is the way to convert char to int.
      ans = ans + ((int)(s[i]-'0')*base);
      base = base * 2;
    }
    cout<<ans;
}

int main(){
  string s;
  cin>>s;
  binary_to_decimal(s);
  return 0;
}