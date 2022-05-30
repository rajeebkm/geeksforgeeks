function getRepeatedElement(arr, n) {
  let sum = 0;
  for (let i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  return sum - ((n - 1) * n) / 2;
}
let arr = [1, 5, 3, 2, 6, 4, 7, 8, 4];
let len = arr.length;
console.log("Repeated element: ", getRepeatedElement(arr, len));
