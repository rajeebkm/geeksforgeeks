#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int key){

    for (int i = 0; i < n; i++){

        if(arr[i]==key)
            return i;
    }

    return -1;
}

int main(){
    int array[] = {4, 5, 7, 21, 9, 8, 78};
    int arrSize = *(&array + 1) - array;
    int value = 9;

    cout<< "Value found at the index " << linearSearch(array, arrSize, value);

    return 0;
}

//Time Complexity: O(n)

