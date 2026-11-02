#include <stdio.h>

int main()
{
    int score;
    int sum = 0;
    double avg;
    int i;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &score);
        sum += score;
    }

    avg = (double)sum / 5;

    printf("sum : %d\n", sum);
    printf("avg : %.1lf", avg);

    return 0;
}