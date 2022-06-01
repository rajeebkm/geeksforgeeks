#include<bits/stdc++.h>

using namespace std;

int binarySearchRecursion(int arr[], int l, int r, int key){

    while(l<=r){
        int mid = l + (r - l) / 2;
        
        if(arr[mid]==key)
            return mid;

        if(arr[mid]<key)
            return binarySearchRecursion(arr, mid + 1, r, key);

        return binarySearchRecursion(arr, l, mid - 1, key);
    }

    return -1;
}

int main(){

    int array[] = {2, 4, 56, 7, 8, 10, 9, 34, 78};

    int arrSize = sizeof(array) / sizeof(int);

    cout << "Given array is: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << array[i] << ", ";
    }
    cout << "\nSorted array is: ";

    //Given array should be sorted, otherwise we have to do sorting of array before proceeding binary search
    sort(array, array + arrSize);

    for (int i = 0; i < arrSize;i++){
        cout << array[i] << ", ";
    }

        int value = 10;

    int l = 0;

    int r = arrSize - 1;

    int index = binarySearchRecursion(array, l, r, value);

    if(index != -1){
        cout << "\nValue is present at the index " << index;
   
    }else  cout << "\nValue is not present";

    return 0;
}