#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int ternarySearchIterative(int arr[], int l, int r, int key){

   

    while (l<=r){
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1]==key){
            return mid1;
        }

        if(arr[mid2]==key){
            return mid2;
        }
        
        if(key<arr[mid1]){
            r = mid1 - 1;
        }else if(key>arr[mid2]){
            l = mid2 + 1;
        }else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }

    return -1;
}

int main(){
    int array[] = {2, 6, 4, 5, 90, 34, 27};
    int arr_size = *(&array + 1) - array;
       sort(array, array + arr_size);

    cout << "\nSorted array: ";
    for (int i = 0; i < arr_size; i++){
        cout << array[i] << ", ";
    }

    int key;    

	while (true) 
	{
        cout << "\nPlease enter the value, you want index: ";
        if(!(cin>>key))
        {
   		    cin.clear();
		    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid integer!!! Please try again\n\n";
            continue;
        }
        else 
            break;
    }

    cout << "The value you entered is: " << key;

    int l = 0;
    int r = arr_size - 1;
    int index = ternarySearchIterative(array, l, r, key);

    if(index!=-1){
        cout << "\nValue found at the Index: " << index <<"\n";
    }else{
        cout << "\nValue is not found.\n";
    }

        return 0;
}

// Time Complexity: O(Log3N), where N is the number of elements in the array. 