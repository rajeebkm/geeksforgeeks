#include<bits/stdc++.h>

using namespace std;

int binarySearchIterative(int arr[], int l, int r, int key){

    

    while(l<=r){
        int mid = l + (r - l) / 2;       

        if(arr[mid]==key)
            return mid;

        if(arr[mid]<key)
            l = mid + 1;
        else
        r = mid - 1;

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
    

    //Given array should be sorted, otherwise we have to do sorting of array before proceeding binary search
    sort(array, array + arrSize);
    
    cout << "\nSorted array is: ";

    for (int i = 0; i < arrSize;i++){
        cout << array[i] << ", ";
    }

    int value = 10;

    int l = 0;

    int r = arrSize - 1;

    int index = binarySearchIterative(array, l, r, value);

    if(index != -1){
        cout << "\nValue is present at the index " << index;
   
    }else  cout << "\nValue is not present";

    return 0;
}

// Time Complexity: O(log n), where n is the number of elements in the array.