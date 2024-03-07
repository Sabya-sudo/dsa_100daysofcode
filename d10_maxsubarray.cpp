#include <iostream>
#include <algorithm>

using namespace std;

int maxSubArray(int arr[], int n) {
    int maxNegative = arr[0];
    int sum = 0, largest = arr[0];

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
             
            return 0;
        }

        maxNegative = max(maxNegative, arr[i]);
        sum += arr[i];
         
        sum = max(sum, 0);
        largest = max(largest, sum);
    }

    
    return max(maxNegative, largest);
}

int main() {
   
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = maxSubArray(arr, n);
    
    cout << "Result: " << result << endl;

    return 0;
}
