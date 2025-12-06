//Print an array that outputs only the odd number from the array.

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

            if (arr[i] %2 != 0)
            {
                printf("%d ", arr[i]);
            }
    }

    return 0;
}