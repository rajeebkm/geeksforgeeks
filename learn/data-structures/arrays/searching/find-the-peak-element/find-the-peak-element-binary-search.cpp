// A C++ program to find a peak element
// using divide and conquer
#include <bits/stdc++.h>
using namespace std;

// A binary search based function
// that returns index of a peak element
int findPeakUtil(int arr[], int low,
				int high, int n)
{
	// Find index of middle element
	// (low + high)/2
	int mid = low + (high - low) / 2;

	// Compare middle element with its
	// neighbours (if neighbours exist)
	if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
		(mid == n - 1 || arr[mid + 1] <= arr[mid]))
		return mid;

	// If middle element is not peak and its
	// left neighbour is greater than it,
	// then left half must have a peak element
	else if (mid > 0 && arr[mid - 1] > arr[mid])
		return findPeakUtil(arr, low, (mid - 1), n);

	// If middle element is not peak and its
	// right neighbour is greater than it,
	// then right half must have a peak element
	else
		return findPeakUtil(
			arr, (mid + 1), high, n);
}

// A wrapper over recursive function findPeakUtil()
int findPeak(int arr[], int n)
{
	return findPeakUtil(arr, 0, n - 1, n);
}

// Driver Code
int main()
{
	int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
    int findPeakIndex=findPeak(arr, n);
    cout << "Index of a peak point is "
         << findPeakIndex;
    cout << "\nPeak Element is: "
         << arr[findPeakIndex];

    return 0;
}

// Complexity Analysis: 

// Time Complexity: O(Logn). 
// Where n is the number of elements in the input array. In each step our search becomes half. So it can be compared to Binary search, So the time complexity is O(log n)
// Space complexity: O(1). 
// No extra space is required, so the space complexity is constant.
