#include<iostream>

using namespace std;

int findRepetitive(int array[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += array[i];
    }

    return (sum - (n*(n - 1)) / 2);
}

int main(){
    int arr[] = {1, 3, 2, 4, 5, 7, 6, 8, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Only repetitive element in array: " << findRepetitive(arr, arr_size) << endl;
    return 0;
}



