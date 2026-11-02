#include <stdio.h>

int main()
{
    int h, w, o;

    scanf("%d %d", &h, &w);

    o = w + 100 - h;

    printf("%d\n", o);

    if (o > 0)
    {
        printf("Obesity\n");
        printf("Need control\n");
    }

    return 0;
}
