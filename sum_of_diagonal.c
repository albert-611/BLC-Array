//Sum of diagonal
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumFirst = 0, sumSecond = 0;
    for (int i = 0; i < n; i++) {
        sumFirst += arr[i][i];
        sumSecond += arr[i][n - 1 - i];
    }
    printf("First diagonal = %d\nSecond diagonal = %d\n", sumFirst, sumSecond);
    return 0;
}
