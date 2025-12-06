//Write a program to insert an element in a 1D

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
   

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     int pos, val;
    scanf("%d", &pos);
    scanf("%d", &val);

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}