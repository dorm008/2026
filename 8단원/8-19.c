#include <stdio.h>

int main() {
    int arr[100];
    int i = 0;
    int max, min;

    while (1) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
            break;

        i++;
    }

    max = arr[0];
    min = arr[0];

    for (int j = 1; j < i; j++) {
        if (arr[j] > max)
            max = arr[j];

        if (arr[j] < min)
            min = arr[j];
    }

    printf("%d", max + min);

    return 0;
}