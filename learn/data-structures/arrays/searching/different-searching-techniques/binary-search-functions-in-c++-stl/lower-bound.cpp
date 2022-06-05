// lower_bound()

// The lower_bound() function is used to find the lower bound of an element present
// in a container. That is it finds the location of an element just smaller than a given
// element in a container. This function accepts the start iterator, end iterator and the
// element to be checked as parameters and returns the iterator pointing to the lower
// bound of the element passed as the parameter. If all elements of the container are
// smaller are less than the element passed, then it returns the last iterator.

// Syntax:
// lower_bound(first_itr, last_itr, ele)

// Return Value: Returns an iterator pointing to the lower bound of the element ele.
// That is if ele exists in the container, it returns an iterator pointing to ele otherwise it
// returns an iterator pointing to the element just greater than ele.

// Below program illustrate the working of lower_bound() function with both Vectors
// and Arrays:

// CPP program to illustrate lower_bound()
// for both vectors and array

    #include <bits/stdc++.h>
    using namespace std;
    // Driver code
    int main()
    {
     /*** USING lower_bound() ON VECTORS ***/

     vector<int> v{ 10, 20, 30, 40, 50 };
     // Print vector
     cout << "Vector contains :";
     for (int i = 0; i < v.size(); i++)
     cout << " " << v[i];
     cout << "\n"; 
 
     vector<int>::iterator low1, low2;

     // using lower_bound()
     low1 = lower_bound(v.begin(), v.end(), 20);
     low2 = lower_bound(v.begin(), v.end(), 55);

     cout << "\nlower_bound for element 20 at position : " << (low1 - v.begin());
     cout << "\nlower_bound for element 55 at position : " << (low2 - v.begin());


     /*** USING lower_bound() ON ARRAYS ***/

     int arr[] = { 10, 20, 30, 40, 50 };
     // Print elements of array
     cout << "\n\nArray contains :";
     for (int i = 0; i < 5; i++)
     cout << " " << arr[i];
     cout << "\n";

     // using lower_bound()
     int lb1 = lower_bound(arr, arr + 5, 5) - arr;
     int lb2 = lower_bound(arr, arr + 5, 25) - arr;
     int lb3 = lower_bound(arr, arr + 5, 30) - arr;
     int lb4 = lower_bound(arr, arr + 5, 55) - arr;

     cout << "\nlower_bound for element 5 is at position : " << (lb1);
     cout << "\nlower_bound for element 25 is at position : " << (lb2);
     cout << "\nlower_bound for element 30 is at position : " << (lb3);
     cout << "\nlower_bound for element 55 is at position : " << (lb4) << "\n";

     return 0;
    }
// 
    // Time Complexity:  The number of comparisons performed is logarithmic. Therefore, the time complexity of the above approach is O(logN), where N = size. (last – first)