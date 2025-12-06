//Write a program that searches a specific element from an array.

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int i, j;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to Search: ");
    int val;
    scanf("%d", &val);


    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            found = 1;
            break;
        }
        
    }

    if (found)
    {
        printf("%d FOUND :)", val);
    }

    else{
        printf("%d NOT FOUND :(", val);

    }
    
    return 0;
}