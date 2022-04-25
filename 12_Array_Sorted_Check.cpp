#include<bits/stdc++.h>
using namespace std;

bool check_if_sorted(int arr[],int n){
    for(int i = 1 ; i<n ; i++){
        // remember we are comparing the next element with the previous element, so we started from 1
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    if(check_if_sorted(arr,n)==false){
        cout<<"The array is not sorted.";
    }
    else{
        cout<<"The array is sorted.";
    }
    return 0;
}
