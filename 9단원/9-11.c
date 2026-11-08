#include <stdio.h>

int main() {
    int score[3][3];
    int i, j;
    int rowSum, colSum[3] = {0};
    int total = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        rowSum = 0;
        for (j = 0; j < 3; j++) {
            printf("%d ", score[i][j]);
            rowSum += score[i][j];
            colSum[j] += score[i][j];
        }
        printf("%d\n", rowSum);
        total += rowSum;
    }

    for (j = 0; j < 3; j++) {
        printf("%d ", colSum[j]);
    }
    printf("%d\n", total);

    return 0;
}