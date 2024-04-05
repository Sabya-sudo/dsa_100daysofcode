#include <iostream>
#include <numeric>
using namespace std;
int main (){
   int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
   int n = 7, sum = 0;
   sum = accumulate(arr, arr+n, sum);
   cout<<"The array sum is "<<sum;
   cout<<"The array sum is "<<sum;
   return 0;
}
