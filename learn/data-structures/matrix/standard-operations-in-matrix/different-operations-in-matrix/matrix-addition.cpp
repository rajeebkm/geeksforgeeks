// // C++ Program for matrix addition

// #include <iostream>
// using namespace std;

// int main()
// {

// 	int m = 2, n = 2;
// 	int a[m][n] = { { 2, 5 }, { 1, 7 } };
// 	int b[m][n] = { { 3, 7 }, { 2, 9 } };

// 	int c[m][n];
// 	for (int i = 0; i < m; i++)
// 		for (int j = 0; j < n; j++) {
// 			c[i][j] = a[i][j] + b[i][j];
// 		}

// 	for (int i = 0; i < m; i++) {
// 		for (int j = 0; j < n; j++)
// 			cout << c[i][j] << " ";
// 		cout << endl;
// 	}
// }

#include<bits/stdc++.h>

using namespace std;

const int rows = 2;
const int cols = 2;

void matrixSubstraction(int a[rows][cols], int b[rows][cols], int c[rows][cols]){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Matrix substraction: " << endl;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << c[i][j]<<" ";
        
        }
        cout << endl;
     }
}

int main(){
  
    int A[rows][cols] = {{1, 2}, {3, 4}};
    int B[rows][cols] = {{5, 6}, {7, 8}};

    int C[rows][cols];
    matrixSubstraction(A, B, C);
    return 0;
}

// The complexity of the addition operation is O(m*n) where m*n is order of matrices