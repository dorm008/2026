#include <stdio.h>

int main() {
    int arr[100];
    int i = 0;
    int count = 0;
    int sum = 0;

    while (1) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
            break;

        i++;
    }

    for (int j = 0; j < i; j++) {
        if (arr[j] % 5 == 0) {
            count++;
            sum += arr[j];
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / count);

    return 0;
}