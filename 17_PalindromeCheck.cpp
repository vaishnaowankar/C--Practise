// Palindrome read same forward and backward.

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;

  int start = 0;
  int end = s.length()-1;

  while(start < end){
    if(s[start] != s[end]){
      cout<<"Not a Palindrome";
      return 0;
    }
    else{
      start++;
      end--;
    }
  }
  cout<<"It is a Palindrome";
  return 0;
}