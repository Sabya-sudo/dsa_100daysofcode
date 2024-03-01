// This is a program to fin repeting elements in an array
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array";
    int temp=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }                      //0 1 2 3 4
    for(int i=0;i<n;i++){ // 1 2 2 4 4 
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
            }
    }
    }

}