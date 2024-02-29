#include<iostream>
using namespace std;
int main(){

int arr[5]={1,2,30,4,5};

int max=0;
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<max;
}
