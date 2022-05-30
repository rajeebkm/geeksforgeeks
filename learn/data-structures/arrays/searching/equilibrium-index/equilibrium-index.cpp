// C++ program to find equilibrium
// index of an array

// Example : 

// Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
// Output: 3 
// 3 is an equilibrium index, because: 
// A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

// Input: A[] = {1, 2, 3} 
// Output: -1 

#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int i, j;
	int leftsum, rightsum;

	/* Check for indexes one by one until
	an equilibrium index is found */
	for (i = 0; i < n; ++i)
	{	

		/* get left sum */
		leftsum = 0;
		for (j = 0; j < i; j++)
			leftsum += arr[j];

		/* get right sum */
		rightsum = 0;
		for (j = i + 1; j < n; j++)
			rightsum += arr[j];

		/* if leftsum and rightsum
		are same, then we are done */
		if (leftsum == rightsum)
			return i;
	}

	/* return -1 if no equilibrium
	index is found */
	return -1;
}

// Driver code
int main()
{
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << equilibrium(arr, arr_size);
	return 0;
}

// Time Complexity: O(n^2)

