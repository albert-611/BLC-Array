#include <stdio.h>

int main(){

    int n;

    printf("enter number of participants: ");
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        printf("Enter time for Participants %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    int f[100] ={0};

    for (int i = 0; i < n; i++)
    {
        f[arr[i]]++;
    }

    int maxf = 0;
    int value = 0;
    for (int i = 0; i < 100; i++)
    {
        if (f[i] > maxf)
        {
            maxf = f[i];
            value = i;

        }
        
    }
    
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            pos = i + 1;
            break;
        }
        
    }

    printf("Fastest Time = %d\n", value);
    printf("Position = %d\n", pos);


    return 0;
    


}