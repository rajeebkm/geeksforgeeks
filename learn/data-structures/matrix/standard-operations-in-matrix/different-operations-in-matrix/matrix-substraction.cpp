#include<bits/stdc++.h>

using namespace std;

const int rows = 2;
const int cols = 2;

void matrixSubstraction(int a[rows][cols], int b[rows][cols], int c[rows][cols]){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            c[i][j] = a[i][j] - b[i][j];
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

// Subtraction of matrices is non-commutative which means A-B ≠ B-A
// Subtraction of matrices is non-associative which means A-(B-C) ≠ (A-B)-C
// The order of matrices A, B and A-B is always same
// If order of A and B is different, A-B can’t be computed
// The complexity of subtraction operation is O(m*n) where m*n is order of matrices