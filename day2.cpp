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

//Stack question without implementing array will edit it later
#include<iostream>
using namespace std;
int main(){
    
int arr[10]={0};
    
int n;

int count =9 ;
while(true){
   cin>>n; 
int a;

if(n==1){
    cin>>a;
    arr[count]=a;
    count--;
    cout<<"Element "<<a<<" pushed onto the stack."<<endl;
    
}
    else if(n==2){
        if(count<=9 || arr[count]!=0){
        cout<<"Element "<<arr[count + 1]<<" Popped from the stack."<<endl;
        arr[count + 1]=0;
        count++;}
        else if(count>9){
            cout<<"Stack Underflow. Cannot perform pop operation.";
        }
    }
    else if(n==3){
        if(count == 9){
            cout<<"Stack is empty."<<endl;
        }
        else {
        cout<<"Elements in the stack: ";
        for(int i=0;i<10;i++){
            if(arr[i] != 0){
            cout<<arr[i]<<" ";}
        }
        cout<<endl;}
    }
    else if(n==4){
        cout<<"Exiting the program."<<endl;
        break;
    }
    else{
        cout<<"Invalid choice."<<endl;
    }
     
    
}
    return 0;
}
