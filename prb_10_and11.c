//Write a program to sum up the row-wise and column wise element of a 2D array.

#include<stdio.h>

int main(){

    int n,m;

    scanf("%d%d", &n, &m);
    int arr[100][100];

    printf("Enter the values: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("\nPrinting the values: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" [%d%d] = %d", i, j,arr[i][j]);
        }
        
        printf("\n");
    }


    printf("\nSum of Rows:\n\n");

    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
        {
            rowSum += arr[i][j];
        }

        printf(" Sum of Row %d = %d", i, rowSum);
        
        printf("\n");
    }

    printf("\nSum of columns: \n\n");

    for (int j = 0; j < m; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum += arr[i][j];
        }

        printf(" Sum of Column %d = %d", j, colSum);
        printf("\n");
        
    }

    return 0;
    
  
}