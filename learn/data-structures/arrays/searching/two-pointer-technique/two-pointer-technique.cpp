
// Using Two-pointers Technique

// Importing required libraries
#include <iostream>
#include <algorithm>

using namespace std;

// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
bool isPairSum(int A[], int N, int key)
{
	// represents first pointer
	int i = 0;

	// represents second pointer
	int j = N - 1;

	while (i < j) {

		// If we find a pair
		if (A[i] + A[j] == key)
			return true;

		// If sum of elements at current
		// pointers is less, we move towards
		// higher values by doing i++
		else if (A[i] + A[j] < key)
			i++;

		// If sum of elements at current
		// pointers is more, we move towards
		// lower values by doing j--
		else
			j--;
	}
	return false;
}


// Driver code
int main()
{
	int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
	int val = 21;
	int arrSize = *(&arr + 1) - arr;
	sort(arr, arr + arrSize); // Sort the array

	// Function call

    bool pairSum=isPairSum(arr, arrSize, val);

    if(pairSum == true){
        cout << "Pair with sum " << val << " exists.";
    }
    else
    {
        cout << "Pair with sum " << val << " dosen't exist.";
    }

    return 0;
}

//Time Complexity:  O(n)