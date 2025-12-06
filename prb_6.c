//Write a program to sort an array in ascending/ descending order.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    printf("Ascending: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Descending\n");
    for (int i = n - 1 ; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}