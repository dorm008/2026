#include <stdio.h>

int main()
{
    int base, height;
    char ch;
    double area;

    while (1)
    {
        scanf("%d %d", &base, &height);

        area = base * height / 2.0;

        printf("Triangle area = %.1f\n", area);

        printf("Continue? ");
        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y')
            break;
    }

    return 0;
}