#include <stdio.h>

int main()
{
    int n;
    int cnt = 0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            cnt++;
        }
    }

    printf("Even numbers = %d", cnt);

    return 0;
}