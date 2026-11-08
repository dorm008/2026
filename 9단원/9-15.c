#include <stdio.h>

int main() {
    int count[7] = {0};
    int num, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        count[num]++;
    }

    for (i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, count[i]);
    }

    return 0;
}