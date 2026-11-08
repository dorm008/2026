#include <stdio.h>

int main() {
    int arr[100];
    int i = 0;

    while (1) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
            break;

        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}