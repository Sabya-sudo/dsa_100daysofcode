//This is a program to find second largest element in an array.
#include<iostream>
using namespace std;
int main(){
    //Taking size 
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    int max;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            temp=max;
            max=arr[i];
        }

    }
    cout<<temp;
 
}
 