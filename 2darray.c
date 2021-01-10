#include<stdio.h>
int main(){
/*
2D array can be defined as an array of arrays. 
2D array is organized as matrices which can be represented as
the collection of rows and columns.
2D arrays are created to implement a relational database look alike data structure. 
It provides ease of holding bulk of data at once which can be passed to 
any number of functions wherever required.

The syntax of declaring two dimensional array is very much similar to that of
a one dimensional array, given as follows.
int arr[max_rows][max_columns];  
*/

// Declaration of 2D Array with  index and values
    int arr_2d[2][2] = {
        {2,3},
        {4,5}
    };
// Declaration of 2d array without index and without  values
    int i,j;
    
    int arrays_2d[2][3];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter the Array[%d][%d]th element:",i+1,j+1);
            scanf("%d",&arrays_2d[i][j]);
        }
    }

// Declaration of 2d array without index and values
    int m,n;
    printf("Enter the maximum row:");
    scanf("%d",&m);
    printf("Enter the maximum column:");
    scanf("%d",&n);
    int array_2d[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the Array[%d][%d]th element:",i+1,j+1);
            scanf("%d",&array_2d[i][j]);
        }
    }
// Accessing the elements in 2d array

    printf("%d\t%d\t%d", array_2d[1][2] ,array_2d[2][2], array_2d[0][1] );
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",array_2d[i][j]);
        }
        printf("\n");
    }

}
