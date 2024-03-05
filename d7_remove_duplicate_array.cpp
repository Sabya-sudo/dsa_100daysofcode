#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Delete(int j,int n,int arr[]){
for(int i=j;i<n;i++){
    arr[i]=arr[i+1];

}
}
int main(){
    int n;
    int count=0;
cout<<"Enter the size of the array\n";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in array\n";


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                Delete(j,n,arr);
                count++;
            }else continue;
        }
    }
    for(int i=0;i<n-count + 1;i++){
         cout<<arr[i]<<" ";
    }
   
} 

