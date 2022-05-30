#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std;

//1. Sorting

// bool sumPair(int array[], int n, int key){
//     int l = 0;
//     int r = n - 1;

//     while (l < r) {
//         if ( array[l] + array[r] == key)
//             return 1;
//         else if (array[l] + array[r] < key)
//             l++;
//         else
//             r--;
//     }

//     return 0;
// }

// int main(){
//     int arr[] = {1, 5, 4, -2, 8, 10};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);
//     int x = 30;

//     cout << "Before sorting: ";
//     for (int i = 0; i < arr_size; i++){
//         cout << arr[i]<<",";
//     }
//     cout << "\nAfter sorting:";

//     std::sort(arr, arr + arr_size, less<int>());

//     for (int i = 0; i < arr_size; i++)
//     {
//         cout << arr[i]<<",";
//     }
//         if(sumPair(arr, arr_size, x)){
//         cout << "\nPair is exist" << endl;
//         }else
//             cout << "\nPair is not exist" << endl;

//     return 0;
// }

//Complexity Analysis:  

// Time Complexity: Depends on what sorting algorithm we use. 
// If Merge Sort or Heap Sort is used then (-)(nlogn) in the worst case.
// If Quick Sort is used then O(n^2) in the worst case.
// Auxiliary Space: This too depends on sorting algorithm. The auxiliary space is O(n) for merge sort and O(1) for Heap Sort.

//2. Hasing

void findPairSum(int array[], int n, int sum){

    unordered_set<int> s;

    for (int i = 0; i < n; i++){
        int temp = sum - array[i];
        if(s.find(temp)!=s.end()){
            cout << "\nPair with given sum "
                 << sum << " is (" << array[i] << ","
                    << temp << ")" << endl;
        }
        s.insert(array[i]);
    }

    cout << "\nThe unique elements in unordered_set s are: ";
        for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << ", ";

}

int main(){

    int arr[] = { 1, 4, 45, 6, 10, 8 };
    int arr_size = sizeof(arr) / sizeof(int);

    int value = 16;

    findPairSum(arr, arr_size, value);
    return 0;
}

//Complexity Analysis:  

// Time Complexity: O(n). 
// As the whole array is needed to be traversed only once.
// Auxiliary Space: O(n). 
// A hash map has been used to store array elements.
// Note: The solution will work even if the range of numbers includes negative numbers + if the pair is formed by numbers recurring twice in array eg: array = [3,4,3]; pair = (3,3); target sum = 6