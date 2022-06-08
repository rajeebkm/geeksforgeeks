#include<bits/stdc++.h>

using namespace std;

#define M 3
#define N 4

void transposeSquareMatrix(int a[][N], int b[][N]){

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            b[i][j] = a[j][i];
        }
    }
    // for (int i = 0; i < N; i++){
    //     for (int j = 0; j < N; j++){
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

void transposeRectangularMatrix(int c[][N], int d[][M]){

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            d[i][j] = c[j][i];
        }
    }
  
}

void transposeInPlaceSquareMatrix(int e[][N]){

      for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            swap(e[i][j], e[j][i]);
        }
    }
}



int main(){

    int A[N][N] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

    int B[N][N];

    int C[M][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 } };

    int D[N][M];

    cout << "Given Square Matrix: " << endl;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed Square Matrix: " << endl;

    transposeSquareMatrix(A, B);

      for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Given Rectangular Matrix: " << endl;

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed Rectangular Matrix: " << endl;

    transposeRectangularMatrix(C, D);

      for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Given In-place Square Matrix: " << endl;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed In-place Square Matrix: " << endl;

    transposeInPlaceSquareMatrix(A);

      for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// 
// // Note- Transpose has a time complexity of O(n + m), where n is the number of columns and m is the number of non-zero elements in the matrix. The computational time for transpose of a matrix using identity matrix as reference matrix is O(m*n). Suppose, if the given matrix is a square matrix, the running time will be O(n2).