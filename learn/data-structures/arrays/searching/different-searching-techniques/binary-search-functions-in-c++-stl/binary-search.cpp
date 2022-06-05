//binary_search()

// This function only checks if a particular element is present in a sorted container or
// not. It accepts the starting iterator, ending iterator and the element to be checked as
// parameters and returns True if the element is present otherwise False.

// Syntax:
// binary_search(start_ptr, end_ptr, ele)

#include<bits/stdc++.h>

using namespace std;

int main(){

    //array
    int arr[] = {1, 2, 3, 4};

    int n = *(&arr + 1) - arr;
    int key = 4;

    if(binary_search(arr, arr+n, key)){
        cout << key << " exists." << endl;
    }else{
        cout << key << " doesn't exist" << endl;
    }

    //vector

    vector<int> vec = {2, 4, 6, 7, 8, 9};
    int key2 = 10;

    if(binary_search(vec.begin(), vec.end(), key2)){
           cout << key2 << " exists." << endl;
    }else{
        cout << key2 << " doesn't exist" << endl;
    }
}

// Note: This function only checks if the element is present or not, it does not give any
// information about the location of the element if it exists.