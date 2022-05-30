//---delete---//

//Function to implement search operation

function searchElement(arr, n, key) {
  for (let i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

let arr = [23, 45, 0, 35, 43, 21];
let n = arr.length;
let key = 23;

function deleteElement(arr, n, key) {
  let position = searchElement(arr, n, key);

  if (position == -1) {
    console.log("Elements not found");
  }

  //deleting element

  let i;
  for (i = position; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  return n - 1;
}

let remElement = deleteElement(arr, n, key);

console.log(arr);
console.log("Array Elements after deletion: ");

for (i = 0; i < remElement; i++) {
  console.log(arr[i]);
}
