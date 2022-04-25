#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,result = 0;
  cin>>n>>m;

  int arr1[n];
  int arr2[m];

  for(int i = 0 ; i<n ; i++){
    cin>>arr1[i];
  }

  for(int i = 0 ; i<m ; i++){
    cin>>arr2[i];
  }

  for(int i = 0 ; i<n ; i++){
    result += arr1[i];
  }

  for(int i = 0 ; i<m ; i++){
    result += arr2[i];
  }

  cout<<result;
  return 0;
}