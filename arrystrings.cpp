#include <iostream>  // Including the Input/Output Stream Library
#include <string>    // Including the String Library

using namespace std;  // Using the Standard Namespace

// Function to find the third highest length string from an array of strings
string third_highest(string strArr[], int size) {

    int len1, len2, len3, index1, index2, index3; // Declaring variables to store lengths and indices
    len1 = len2 = len3 = 0; // Initializing length variables to 0

    //  Get the length of the largest word in the string array
    for (int y = 0; y < size; y++) {
        if (strArr[y].length() > len1) {
            len1 = strArr[y].length();  // Update len1 if a longer string is found
            index1 = y;  // Save the index of the longest string
        }
    }

    // Get the length of the second largest word in the string array
    for (int z = 0; z < size; z++) {
        if (strArr[z].length() >= len2 && z != index1) {
            len2 = strArr[z].length();  // Update len2 if a longer string (excluding the first largest) is found
            index2 = z;  // Save the index of the second longest string
        }
    }

    // Get the length of the third largest word in the string array
    for (int x = 0; x < size; x++) {
        if (strArr[x].length() >= len3 && x != index1 && x != index2) {
            len3 = strArr[x].length();  // Update len3 if a longer string (excluding the first and second largest) is found
            index3 = x;  // Save the index of the third longest string
        }
    }

    // Check if the lengths of the second and third largest strings are the same
    if (len2 == len3) {
        return strArr[index2];  // If equal, return the second longest string
    } else {
        return strArr[index3];  // Otherwise, return the third longest string
    }
}

// Main function
int main() {

    // Arrays of strings
    string S1[] = { "abcdefgh", "abcdefg", "abcdef", "abcde", "abcd" };
    string S2[] = { "abc", "abc", "abc", "abc", "abc" };
    string S3[] = { "abc", "abcd", "abcd" };

    // Determining the size of each array
    int size_S1 = sizeof(S1)/sizeof(S1[0]);  // Size of S1
    cout <<"Array elements: ";
    for (int i = size_S1 - 1; i >= 0; i--) 
        cout << S1[i] << " ";  // Printing elements of S1 in reverse order
    third_highest(S1, size_S1 );  // Calling the third_highest function
    cout << "\nThird highest length string: " << third_highest(S1, size_S1 );  // Printing the third highest length string of S1
    cout << endl;

    int size_S2 = sizeof(S2)/sizeof(S2[0]);  // Size of S2
    cout <<"\nArray elements: ";
    for (int i = size_S2 - 1; i >= 0; i--) 
        cout << S2[i] << " ";  // Printing elements of S2 in reverse order
    cout << "\nThird highest length string: " << third_highest(S2, size_S2 );  // Printing the third highest length string of S2
    cout << endl;

    int size_S3 = sizeof(S3)/sizeof(S3[0]);  // Size of S3
    cout <<"\nArray elements: ";
    for (int i = size_S3 - 1; i >= 0; i--) 
        cout << S3[i] << " ";  // Printing elements of S3 in reverse order
    cout << "\nThird highest length string: " << third_highest(S3, size_S3 );  // Printing the third highest length string of S3
    cout << endl;

    return 0;  // Return statement indicating successful completion
}
