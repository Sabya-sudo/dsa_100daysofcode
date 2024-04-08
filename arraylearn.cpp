#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int mer=n+m;
    int arr1[n],arr2[m],arr3[mer];
    //input of 1st array
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    //input for 2nd array
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    //adding these two in 3rd array
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }

     for(int i=0;i<n;i++){
        arr3[n+i]=arr2[i];
    }
    for (int i = 0; i < mer; ++i) {
        cout << arr3[i] << " ";
    }
    return 0;
}
