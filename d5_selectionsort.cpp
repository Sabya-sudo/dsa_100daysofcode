#include<iostream>
//A slectionsort program in C++
using namespace std;
int main(){
int arr[5]={5,4,3,2,1};
int temp=0;
int mins=0;
for(int i=0;i<5;i++){
mins=i;
for(int j=i+1;j<5;j++){
    if(arr[j]<arr[mins]){
        mins=j;
    }
    temp=arr[i];
    arr[i]=arr[mins];
    arr[mins]=temp;
}
}
for(int i=0;i<5;i++){
    cout<<arr[i];
}


return 0;
}
