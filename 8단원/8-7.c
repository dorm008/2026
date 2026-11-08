#include <stdio.h>

int main() {
    int day[12] = {31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31};

    int month;

    while (1) {
        scanf("%d", &month);

        if (month < 1 || month > 12)
            break;

        printf("%d\n", day[month - 1]);
    }

    return 0;
}