//Write a program to print the elements of a 2D array.
#include <stdio.h>

int main(){

    int n,m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" [%d%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" [%d%d] = %d", i,j,arr[i][j]);
        }
        
        printf("\n");
    }
    
    
    return 0;
}