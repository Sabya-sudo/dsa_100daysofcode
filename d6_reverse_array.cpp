#include <iostream>
using namespace std;

int main() {
    int originalArr[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

   
    for (int i = 0; i < size / 2; i++) {
        int temp = originalArr[i];
        originalArr[i] = originalArr[size - i - 1];
        originalArr[size - i - 1] = temp;
    }

    // Print reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << originalArr[i] << " ";
    }

    return 0;
}
