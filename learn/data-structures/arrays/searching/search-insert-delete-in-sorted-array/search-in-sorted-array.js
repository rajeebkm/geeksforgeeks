//---search---//
function binarySearch(arr, low, high, key) {
  if (high < low) return -1;
  /*low + (high - low)/2;*/
  let mid = Math.trunc((low + high) / 2);
  if (key == arr[mid]) return mid;
  if (key > arr[mid]) return binarySearch(arr, mid + 1, high, key);
  return binarySearch(arr, low, mid - 1, key);
}

// Driver program

// Let us search 3 in below array
let arr = [5, 6, 7, 8, 9, 10];
let n, key;

n = arr.length;
key = 10;

console.log("Index: " + binarySearch(arr, 0, n - 1, key));

// Time Complexity of Search Operation: O(Log n) [Using Binary Search]

// Time Complexities

// Best case complexity: O(1)
// Average case complexity: O(log n)
// Worst case complexity: O(log n)

// Space Complexity

// The space complexity of the binary search is O(1).
