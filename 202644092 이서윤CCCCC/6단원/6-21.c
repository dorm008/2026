#include <stdio.h>

int main()
{
    int n;
    int num;
    int sum = 0;
    double avg;
    int i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    avg = (double)sum / n;

    printf("%.2lf", avg);

    return 0;
}