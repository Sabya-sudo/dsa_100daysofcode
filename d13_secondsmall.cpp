#include <iostream>
#include <string>

using namespace std;

// Function to find the second highest and second lowest numbers in an array of integers
void Second_highest_lowest(int array_nums[], int array_size) {

	// Check if the array has only two elements
	if (array_size == 2)
	{
		// Output the elements in ascending order
		if (array_nums[0] < array_nums[1])
		{
			cout << array_nums[0] << " " << array_nums[1];
		}
		else
		{
			cout << array_nums[1] << " " << array_nums[0];
		}
	}
	else
	{
		// Sorting the array in ascending order using Bubble Sort
		bool flag;
		int temp;

		do
		{
			flag = false;

			for (int x = 0; x < array_size - 1; x++)
			{
				// Swap elements if they are in the wrong order
				if (array_nums[x] > array_nums[x + 1])
				{
					temp = array_nums[x];
					array_nums[x] = array_nums[x + 1];
					array_nums[x + 1] = temp;
					flag = true;
				}
			}
		} while (flag);

		// Determine the index of the second lowest number in the sorted array
		int index = 0;
		for (int y = 0; y < array_size - 1; y++)
		{
			if (array_nums[y] == array_nums[y + 1])
			{
				index++;
			}
			else
			{
				break;
			}
		}

		// Determine the index of the second highest number in the sorted array
		int index2 = array_size - 1;
		for (int z = array_size - 1; z > 0; z--)
		{
			if (array_nums[z] == array_nums[z - 1])
			{
				index2--;
			}
			else
			{
				break;
			}
		}

		// Output the results
		cout << "\nSecond lowest number  of the said array: " << array_nums[index + 1];
		cout << "\nSecond highest Number of the said array: " << array_nums[index2 - 1];
	}
}

// Main function
int main() {

	// Sample arrays of integers
	int nums1[] = { 1, 12, 122, 9 };
    int size_A = sizeof(nums1)/sizeof(nums1[0]);
	
	// Display array elements in reverse order
	cout <<"Array elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums1[i] << " ";

    // Call the Second_highest_lowest function and display the result
    Second_highest_lowest(nums1, size_A );
	cout << endl;
	
	// Repeat the process for the other arrays
	int nums2[] = { 1, 12, 12, 9 };
	size_A = sizeof(nums2)/sizeof(nums2[0]);
	cout <<"\nArray elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums2[i] << " ";
    Second_highest_lowest(nums2, size_A );
	cout << endl;
	
	int nums3[] = { 1, 12, 12, 9, 9, 5, 5 };
	size_A = sizeof(nums3)/sizeof(nums3[0]);
	cout <<"\nArray elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums3[i] << " ";
    Second_highest_lowest(nums3, size_A );
	cout << endl;
	
	int nums4[] = { 9, 9 , 9, 9, 9 };
	size_A = sizeof(nums4)/sizeof(nums4[0]);
	cout <<"\nArray elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums4[i] << " ";
    Second_highest_lowest(nums4, size_A );
	cout << endl;
	
	return 0;   // Return 0 to indicate successful execution
}

