//Given an array A[] and a number x, check for pair in A[] with sum as x (aka Two Sum)

//Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in A[] whose sum is exactly x.

// Examples:

// Input: arr[] = {0, -1, 2, -3, 1}
//         x= -2
// Output: Pair with a given sum -2 is (-3, 1)
//               Valid pair exists
// Explanation:  If we calculate the sum of the output,1 + (-3) = -2

// Input: arr[] = {1, -2, 1, 0, 5}
//        x = 0
// Output: No valid pair exists for 0

// Javascript program to check if there exists a pair
// in array whose sum results in x.

// Function to find and print pair
function chkPair(A, size, x) {
  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size; j++) {
      if (A[i] + A[j] == x) {
        console.log(
          "Pair with a given sum " + x + " is (" + A[i] + ", " + A[j] + ")"
        );

        return true;
      }
    }
  }

  return false;
}

let a = [1, -1, 2, -3, 15];
let x = 16;
let size = a.length;

if (chkPair(a, size, x)) {
  console.log("\nValid pair exists");
} else {
  console.log("\nNo valid pair exists for " + x);
}
// Time Complexity: O(n^2)
// Auxiliary Space: O(1)

//-------------------------------------------------//

//2. Sorting and two pionter techniques

// Javascript program to check if given array
// has 2 elements whose sum is equal
// to the given value

// Function to check if array has 2 elements
// whose sum is equal to the given value
function hasArrayTwoCandidates(A, arr_size, sum) {
  var l, r;

  /* Sort the elements */
  A.sort();

  /* Now look for the two candidates in
	the sorted array*/
  l = 0;
  r = arr_size - 1;
  while (l < r) {
    if (A[l] + A[r] == sum) return 1;
    else if (A[l] + A[r] < sum) l++;
    // A[i] + A[j] > sum
    else r--;
  }
  return 0;
}

/* Driver program to test above function */
var A = [1, 4, 45, 6, 10, -8];
var n = 16;
var arr_size = A.length;
// Function calling
if (hasArrayTwoCandidates(A, arr_size, n))
  console.log("Array has two elements" + " with the given sum");
else console.log("Array doesn't have two" + " elements with the given sum");

//Hashing

// JavaScript program to check if given array
// has 2 elements whose sum is equal
// to the given value

// Javascript implementation using Hashing

function printpairs(arr, sum) {
  let s = new Set();
  for (let i = 0; i < arr.length; ++i) {
    let temp = sum - arr[i];

    // checking for condition
    if (s.has(temp)) {
      console.log(
        "Pair with given sum " + sum + " is (" + arr[i] + ", " + temp + ")"
      );
    }
    s.add(arr[i]);
  }
}

// Driver Code

let array2 = [1, 4, 45, 6, 10, 8];
let length = 16;
printpairs(array2, length);
