//Given an array of integers nums and an integer target , return indices of the two numbers such that they add up to target
#include<iostream>
using namespace std;
int main(){


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int tar=6;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==tar){
            cout<<arr[i]<<arr[j];
            
        }
        
    }
    break;
}




    return 0;
}