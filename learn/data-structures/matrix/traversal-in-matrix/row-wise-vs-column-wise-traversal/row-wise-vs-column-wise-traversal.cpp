// Two common ways of traversing a matrix are row-major-order and column-major-order. 
// Row Major Order : When matrix is accessed row by row. 
// Column Major Order : When matrix is accessed column by column.
// Examples: 
//  
// 
// Input : mat[][] = {{1, 2, 3}, 
                //   {4, 5, 6}, 
                //   {7, 8, 9}}
// Output : Row-wise: 1 2 3 4 5 6 7 8 9
        //  Col-wise : 1 4 7 2 5 8 3 6 9

// C program showing time difference
// in row major and column major access
#include <stdio.h>
#include <time.h>

// taking MAX 10000 so that time difference
// can be shown
#define MAX 10000

int arr[MAX][MAX] = {0};

void rowMajor() {

    int i, j;

    // accessing element row wise
    for (i = 0; i < MAX; i++) {
    	for (j = 0; j < MAX; j++) {
    	arr[i][j]++;
    	}
    }
    }

    void colMajor() {

    int i, j;

    // accessing element column wise
    for (i = 0; i < MAX; i++) {
    	for (j = 0; j < MAX; j++) {
    	arr[j][i]++;
    	}
    }
    }

    // driver code
    int main() {
    int i, j;

    // Time taken by row major order
    clock_t t = clock();
    rowMajor();
    t = clock() - t;
    printf("Row major access time :%f s\n", t / (float)CLOCKS_PER_SEC);

    // Time taken by column major order
    t = clock();
    colMajor();
    t = clock() - t;
    printf("Column major access time :%f s\n", t / (float)CLOCKS_PER_SEC);
    return 0;
    }

//Difference: If we see according to time complexity, both lead to O(n2), but when it comes to cache level one of the orders access will be faster as compare to other one. It depends on the language we are using. Like in C, store matrix in row major form so while accessing the i+1th element after ith, most probably it will lead to a hit, which will further reduce the time of program. 