//Find the element that appears once in an array where every other element appears twice

//Given an array of integers. All numbers occur twice except one number which occurs once. Find the number in O(n) time & constant extra space.

// Example :

// Input:  ar[] = {7, 3, 5, 4, 5, 3, 4}
// Output: 7
//1. XOR Approach

function findSingle(arr, n) {
  let res = arr[0];

  for (let i = 1; i < n; i++) {
    res = res ^ arr[i];
  }
  return res;
}

let arr = [2, 3, 2, 4, 5, 5, 3];
let n = arr.length;
let onceOccur = findSingle(arr, n);

console.log("1. Element occuring once is: ", onceOccur);

//The time complexity of this solution is O(n) and it requires O(1) extra space.

//2. Another Approach
function singleOccurance(arr, n) {
  let m = new Map();
  let sum1 = 0;
  let sum2 = 0;
  for (let i = 0; i < n; i++) {
    if (!m.has(arr[i])) {
      sum1 += arr[i];
      m.set(arr[i], 1);
    }
    sum2 += arr[i];
  }
  return 2 * sum1 - sum2;
}

let array = [2, 3, 2, 4, 1, 5, 5, 3, 6, 1, 4];
let length = array.length;

console.log("2. Element occuring once is: ", singleOccurance(array, length));
