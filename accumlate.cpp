#include <iostream>
using namespace std;
int main (){
   int arr[] = { 2, 5, 7, 8, 2, 6, 9,76,75,79,87,89,90,95};
   int n = 7, sum = 0;
   sum = accumulate(arr, arr+n, sum);
   cout<<"The array sum is "<<sum;
   cout<<"The array sum is "<<sum;
   return 0;
}
