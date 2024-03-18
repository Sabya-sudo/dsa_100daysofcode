// C++ program to merge three sorted arrays 
// by merging two at a time. 
#include <iostream> 
#include <vector> 
using namespace std; 

using Vector = vector<int>; 

void printVector(const Vector& a) 
{ 
	cout << "["; 
	for (auto e : a) 
		cout << e << " "; 
	cout << "]" << endl; 
} 

Vector mergeTwo(Vector& A, Vector& B) 
{ 
	// Get sizes of vectors 
	int m = A.size(); 
	int n = B.size(); 

	// Vector for storing Result 
	Vector D; 
	D.reserve(m + n); 

	int i = 0, j = 0; 
	while (i < m && j < n) { 

		if (A[i] <= B[j]) 
			D.push_back(A[i++]); 
		else
			D.push_back(B[j++]); 
	} 

	// B has exhausted 
	while (i < m) 
		D.push_back(A[i++]); 

	// A has exhausted 
	while (j < n) 
		D.push_back(B[j++]); 

	return D; 
} 

// Driver Code 
int main() 
{ 
	Vector A = { 1, 2, 3, 5 }; 
	Vector B = { 6, 7, 8, 9 }; 
	Vector C = { 10, 11, 12 }; 

	// First Merge A and B 
	Vector T = mergeTwo(A, B); 

	// Print Result after merging T with C 
	printVector(mergeTwo(T, C)); 
	return 0; 
}
