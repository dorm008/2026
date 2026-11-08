#include <stdio.h>

int main() {
    int str[10];
    int i;

    for (i = 0; i < 10; i++) {
        str[i] = i + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", str[i]);
    }

    return 0;
}