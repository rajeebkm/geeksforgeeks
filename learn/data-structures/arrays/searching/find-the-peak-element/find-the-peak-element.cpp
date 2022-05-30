#include<bits/stdc++.h>

using namespace std;

int findPeak(int arr[], int arr_size){

    for (int i = 0; i < arr_size;i++){
        cout <<arr[i]<<", ";

    }

    if(arr_size==1){
        return 0;
    }
    
        
    if (arr[0] >= arr[1])
    {
        return 0;
    }
if(arr[arr_size-1]>=arr[arr_size-2]){
    return arr_size - 1;
}

for (int i = 1; i < arr_size-1; i++){
    if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]){
        return i;
    }
}
}

int main(){
    int array[] = { 1, 3, 20, 4, 1, 0 };
    int n = (*(&array + 1) - array);

    // sort(array, array + n);

    int index=findPeak(array, n);
    cout << "\nIndex of peak element is: " << index;
    cout << "\nPeak element of unsorted array is: "<<array[index];

    return 0;
}
//Complexity Analysis: 

// Time complexity: O(n). 
// One traversal is needed so the time complexity is O(n)
// Space Complexity: O(1). 
// No extra space is needed, so space complexity is constant