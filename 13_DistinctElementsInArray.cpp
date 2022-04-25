#include<bits/stdc++.h>
using namespace std;

int distinctElements(int arr[],int size){
    int i,j,count=1;
    for( i = 1 ; i<size ; i++){
        for( j=0 ; j<i ; j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int arr[size];

    for(int i=0 ; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The distinct elements in array are: "<<distinctElements(arr,size);
    return 0;
}
