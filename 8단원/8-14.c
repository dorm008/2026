#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int sum = 0;
    int oddSum = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0)
            oddSum += arr[i];   // 홀수 번째 입력

        else
            sum += arr[i];      // 짝수 번째 입력
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)oddSum / 5);

    return 0;
}