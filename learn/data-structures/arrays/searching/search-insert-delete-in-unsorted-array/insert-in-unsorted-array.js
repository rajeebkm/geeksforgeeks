//---insert---//

function insertElement(arr, n, key, capacity) {
  if (n >= capacity) return n;

  arr[n] = key;

  return n + 1;
}

let arr = new Array(10);

arr[0] = 23;
arr[1] = 67;
arr[2] = 97;
arr[3] = 4;
arr[4] = 2;
arr[5] = 198;

let n = 6;
let key = 11;
let capacity = arr.length;
console.log("Capacity of array:", capacity);

//Before Insertion
console.log("Before Insertion: ");
for (i = 0; i < n; i++) console.log(arr[i]);
console.log("Number of elements in the array before insertion:", n);

// Inserting key
n = insertElement(arr, n, key, capacity);

//After Insertion
console.log("After Insertion: ");
for (i = 0; i < n; i++) console.log(arr[i]);

console.log("Number of elements in the array after insertion:", n);

//arr.push() can be used to push an element to the end of the array (arr).

// function insertElement(arr, n, key, capacity) {
//   for (let i = n; i < capacity; i++) {
//     arr.push(key);
//   }
//   return arr;
// }

//arr.unshift() can be used to add an element to the beginning of the array (arr).

// function insertElement(arr, n, key, capacity) {
//   for (let i = n; i < capacity; i++) {
//     arr.unshift(key);
//   }
//   return arr;
// }

//Time Complexity: O(1)
