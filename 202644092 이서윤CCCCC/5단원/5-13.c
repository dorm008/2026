#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    x = x + 3;   // 5 -> 8
    printf("%d\n", x);

    x = x - 1;   // 8 -> 7
    printf("%d ", x);

    x = x - 2;   // 7 -> 5
    printf("%d ", x);

    x = x + 3;   // 5 -> 8
    printf("%d\n", x);

    return 0;
}