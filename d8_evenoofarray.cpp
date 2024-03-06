#include <iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
    int num1[n];

    
    cout << "Enter 5 numbers for the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> num1[i];
    }

  
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << num1[i] << " ";
    }
    cout << "\n";
 
    cout << "Even numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (num1[i] % 2 == 0) {
            cout << num1[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}
