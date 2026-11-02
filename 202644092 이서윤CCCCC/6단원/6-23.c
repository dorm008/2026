#include <stdio.h>

int main()
{
    int a, b;
    int min, max;
    int sum = 0;
    int cnt = 0;
    int i;
    double avg;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }

    for (i = min; i <= max; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
            cnt++;
        }
    }

    avg = (double)sum / cnt;

    printf("sum : %d\n", sum);
    printf("avg : %.1lf", avg);

    return 0;
}