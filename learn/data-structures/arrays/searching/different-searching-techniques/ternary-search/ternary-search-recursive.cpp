#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int ternarySearchRecursive(int arr[], int l, int r, int key){

   

    while (l<=r){
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1]==key){
            return mid1;
        }

        if(arr[mid2]==key)
            return mid2;
    
        if(key<arr[mid1]){
            return ternarySearchRecursive(arr, l, mid1 - 1, key);
        }else if(key>arr[mid2]){
            return ternarySearchRecursive(arr, mid2 + 1, r, key);
        }else{
            return ternarySearchRecursive(arr, mid1, mid2 - 1, key);
        }
            
    }

    return -1;
}

int main(){
    int array[] = {2, 6, 4, 5, 90, 34, 27};
    int arr_size = *(&array + 1) - array;

    int key = 4;

    sort(array, array + arr_size);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < arr_size; i++){
        cout << array[i] << ", ";
    }

    int l = 0;
    int r = arr_size - 1;

    cout << "Value found at the Index: " << ternarySearchRecursive(array, l, r, key);

    return 0;
}

// Time Complexity: O(Log3N), where N is the number of elements in the array. 