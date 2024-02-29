/*
This is a basic program to print sum of numbers in a given array
*/
#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter the size of the array\n";
cin>>n;
int arr[n];
cout<<"Enter the numbers in the array\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<sum;
    return 0;
}