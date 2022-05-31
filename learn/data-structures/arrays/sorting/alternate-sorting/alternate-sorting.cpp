// C++ program to print an array in alternate
// sorted manner.
#include <bits/stdc++.h>
using namespace std;

// Function to print alternate sorted values
void alternateSort(int arr[], int n)
{
	// Sorting the array
	sort(arr, arr+n);

    //print sorted array
    cout << "Sorted array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nAlternate sorting\n";
    // Printing the last element of array
    // first and then first element and then
    // second last element and then second
    // element and so on.
    int i = 0, j = n - 1;
	while (i < j) {
		cout << arr[j--] << " ";
		cout << arr[i++] << " ";
	}

	// If the total element in array is odd
	// then print the last middle element.
	if (n % 2 != 0)
		cout << arr[i];
}

// Driver code
int main()
{
	int arr[] = {1, 12, 4, 6, 7, 10, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	alternateSort(arr, n);
	return 0;
}

// Time Complexity: O(n Log n) 
// Auxiliary Space : O(1)
