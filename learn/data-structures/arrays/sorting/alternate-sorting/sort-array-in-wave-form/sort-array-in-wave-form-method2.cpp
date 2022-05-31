// A O(n) program to sort an input array in wave form
#include<iostream>
using namespace std;

// A utility method to swap two numbers.
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >=
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....
void sortInWave(int arr[], int n)
{
	// Traverse all even elements
	for (int i = 0; i < n; i+=2)
	{
		// If current even element is smaller than previous
		if (i>0 && arr[i-1] > arr[i] )
			swap(&arr[i], &arr[i-1]);

		// If current even element is smaller than next
		if (i<n-1 && arr[i] < arr[i+1] )
			swap(&arr[i], &arr[i + 1]);
	}
}

// Driver program to test above function
int main()
{
	int arr[] = {10, 90, 49, 2, 1, 5, 23};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortInWave(arr, n);
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";
	return 0;
}

//Time Complexity

// O(n) time by doing a single traversal of given array. The idea is based on the fact that if we make sure that all even positioned (at index 0, 2, 4, ..) elements are greater than their adjacent odd elements, we don’t need to worry about odd positioned element. Following are simple steps. 
// 1) Traverse all even positioned elements of input array, and do following. 
// ….a) If current element is smaller than previous odd element, swap previous and current. 
// ….b) If current element is smaller than next odd element, swap next and current.