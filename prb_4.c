//Write a program to find a maximum/minimum number from an array.

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    int min = 1e5 + 3, max = -1e5 -3;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);

       if (min > arr[i])
       {
            min = arr[i];
       }

       if (max < arr[i])
       {
            max = arr[i];
       }
       
       
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    
    return 0;
}