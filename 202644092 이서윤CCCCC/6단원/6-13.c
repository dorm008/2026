#include <stdio.h>

int main()
{
    int n;
    int score;
    int sum = 0;
    double avg;
    int i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &score);
        sum += score;
    }

    avg = (double)sum / n;

    printf("avg : %.1lf\n", avg);

    if (avg >= 80)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}