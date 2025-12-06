/*
Read an array X[10]. After, replace every null or negative number of X ​by 1. Print all numbers stored in the array X.

Input
The input contains 10 integer numbers. These numbers ​​can be positive or negative.

Output
For each position of the array, print "X [i] = x", where i is the position of the array and x is the number stored in that position.

Input Sample	
0
-5
63
0
...
Output Sample
X[0] = 1
X[1] = 1
X[2] = 63
X[3] = 1
...

Thanks to Cassio F.*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] <= 0)
        {
            arr[i] = 1;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("X[%d] = %d\n",i, arr[i]);
    }
    
    return 0;


    
}