//---delete---//

// JavaScript program to delete an element from a sorted array

// binary search
function binarySearch(arr, low, high, key) {
  if (high < low) return -1;
  let mid = (low + high) / 2;
  if (key == arr[mid]) return mid;
  if (key > arr[mid]) return binarySearch(arr, mid + 1, high, key);
  return binarySearch(arr, low, mid - 1, key);
}

/* Function to delete an element */
function deleteElement(arr, n, key) {
  // Find position of element to be deleted
  let pos = binarySearch(arr, 0, n - 1, key);

  if (pos == -1) {
    console.log("Element not found");
    return n;
  }

  // Deleting element
  let i;
  for (i = pos; i < n - 1; i++) arr[i] = arr[i + 1];

  return n - 1;
}

/* Driver Code */

let i;
let arr = [10, 20, 30, 40, 50];

let n = arr.length;
let key = 30;

console.log("Array before deletion:\n");
for (i = 0; i < n; i++) console.log(arr[i] + " ");

n = deleteElement(arr, n, key);

console.log("\nArray after deletion:\n");
for (i = 0; i < n; i++) console.log(arr[i] + " ");

//Time Complexity: O(n) (Worst case)
