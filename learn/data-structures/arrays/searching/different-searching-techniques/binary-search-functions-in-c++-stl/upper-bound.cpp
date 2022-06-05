// upper_bound()

// The upper_bound() function is used to find the upper bound of an element present
// in a container. That is it finds the location of an element just greater than a given
// element in a container. This function accepts the start iterator, end iterator and the
// element to be checked as parameters and returns the iterator pointing to the
// element just greater than the element passed as the parameter. If there does not
// exist any such element than the function returns an iterator pointing to the last
// element.

// Syntax:
// upper_bound(first_itr, last_itr, ele)

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {2, 5, 6, 8, 10, 45, 60};

    cout << "Vector is: ";

    for (int i = 0; i < vec.size(); i++){
        cout << vec[i]<<" ";
    }
    cout << "\n";

    vector<int>::iterator upper1, upper2;

    //std::upper_bound

    upper1 = upper_bound(vec.begin(), vec.end(), 8);
    upper2 = upper_bound(vec.begin(), vec.end(), 60);

    // Note: We can calculate the exact index position of the elements by subtracting the
    // beginning iterator from the returned iterator.
    
    cout << "\nUpper_bound for element 8 is at position : " << (upper1-vec.begin());

    cout << "\nUpper_bound for element 60 is at position : " << (upper2 - vec.begin())<<"\n\n"; 

    /*** USING upper_bound() WITH ARRAY ***/

    int arr[] = { 10, 20, 30, 40, 50 };

    // Print elements of array
    cout << "Array contains :";
    for (int i = 0; i < 5; i++)
    cout << " " << arr[i];
    cout << "\n";
    
    // using upper_bound
    int up1 = upper_bound(arr, arr+5, 5) - arr;
    int up2 = upper_bound(arr, arr+5, 25) - arr;
    int up3 = upper_bound(arr, arr+5, 30) - arr;
    int up4 = upper_bound(arr, arr+5, 55) - arr;

 cout << "\nupper_bound for element 5 is at position : " << (up1);
 cout << "\nupper_bound for element 25 is at position : " << (up2);
 cout << "\nupper_bound for element 30 is at position : " << (up3);
 cout << "\nupper_bound for element 55 is at position : " << (up4)<<"\n\n";

 return 0;
}





