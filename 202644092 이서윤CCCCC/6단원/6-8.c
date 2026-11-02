#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int i;

    scanf("%d", &n);

    for (i = n; i <= 100; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}