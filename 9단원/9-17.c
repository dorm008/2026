#include <stdio.h>

int main() {
    int a[10];
    int i;

    scanf("%d %d", &a[0], &a[1]);

    for (i = 2; i < 10; i++) {
        a[i] = (a[i - 1] + a[i - 2]) % 10;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}