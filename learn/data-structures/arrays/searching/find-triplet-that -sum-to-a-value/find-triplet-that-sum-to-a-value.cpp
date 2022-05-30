#include<iostream>

using namespace std;

//1. Naive approach

bool findTriplet(int array[], int size, int sum){

    for (int i = 0; i < size-2; i++){
        for (int j = i+1; j < size - 1; j++){
            for (int k = j+1; k < size; k++){
                if(array[i]+array[j]+array[k]==sum){
                    cout << "Triplets are found: " << array[i] <<", "<< array[j] <<", "<< array[k];
                    return true;
            }
        }
    }
    }
    return false;
}

int main(){
    int arr[]={ 1, 4, 45, 6, 10, 8 };
    int arr_size = sizeof(arr) / sizeof(int);
    int sum_value = 22;
    findTriplet(arr, arr_size, sum_value);
    return 0;
}

// Complexity Analysis: 
// Time Complexity: O(n3). 
// There are three nested loops traversing the array, so the time complexity is O(n^3)
// Space Complexity: O(1). 
// As no extra space is required.

//2. sorting

// C++ program to find a triplet
#include <bits/stdc++.h>
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int arr_size, int sum)
{
	int l, r;
	/* Sort the elements */
	sort(A, A + arr_size);
	/* Now fix the first element one by one and find the
	other two elements */
	for (int i = 0; i < arr_size - 2; i++) {

		// To find the other two elements, start two index
		// variables from two corners of the array and move
		// them toward each other
		l = i + 1; // index of the first element in the
		// remaining elements
		r = arr_size - 1; // index of the last element
		while (l < r) {
			if (A[i] + A[l] + A[r] == sum) {
				printf("Triplet is %d, %d, %d", A[i], A[l],A[r]);
				return true;
			}
			else if (A[i] + A[l] + A[r] < sum)
				l++;
			else // A[i] + A[l] + A[r] > sum
				r--;
		}
	}
	// If we reach here, then no triplet was found
	return false;
}

/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int arr_size = sizeof(A) / sizeof(A[0]);
	find3Numbers(A, arr_size, sum);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)

// Complexity Analysis: 
// Time complexity: O(N^2). 
// There are only two nested loops traversing the array, so time complexity is O(n^2). Two pointers algorithm takes O(n) time and the first element can be fixed using another nested traversal.
// Space Complexity: O(1). 
// As no extra space is required.

//3. Hashing

// C++ program to find a triplet using Hashing
#include <bits/stdc++.h>
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int arr_size, int sum)
{
	// Fix the first element as A[i]
	for (int i = 0; i < arr_size - 2; i++)
	{

		// Find pair in subarray A[i+1..n-1]
		// with sum equal to sum - A[i]
		unordered_set<int> s;
		int curr_sum = sum - A[i];
		for (int j = i + 1; j < arr_size; j++)
		{
			if (s.find(curr_sum - A[j]) != s.end())
			{
				printf("Triplet is %d, %d, %d", A[i],
					A[j], curr_sum - A[j]);
				return true;
			}
			s.insert(A[j]);
		}
	}

	// If we reach here, then no triplet was found
	return false;
}

/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int arr_size = sizeof(A) / sizeof(A[0]);

	find3Numbers(A, arr_size, sum);

	return 0;
}

// Time complexity: O(N^2) 
// Auxiliary Space: O(N)