#include<bits/stdc++.h>
using namespace std;

int main(){
  int n ,sum;
  int count = 0;
  cout<<"Enter the value of arraysize and sum: ";
  cin>>n>>sum;
  int arr[n];

  for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
  }


  for(int i = 0; i<n ; i++){
    for(int j = i + 1 ; j<n ; j++){
      if(arr[i] + arr[j] == sum){
        count++;
      }
    }
  }

  cout<<"Count of pairs is = "<<count;

  return 0;

  
}