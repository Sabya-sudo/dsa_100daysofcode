//Check array pallindrome or not
#include <iostream>
using namespace std;

bool isPalindrome(int array[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        if (array[start] != array[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    const int MAX_SIZE = 100;
    int size, i;
    int arr[MAX_SIZE];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool isPalin = isPalindrome(arr, size);

    if (isPalin) {
        cout << "The array is a palindrome.";
    } else {
        cout << "The array is not a palindrome.";
    }

    return 0;
}
