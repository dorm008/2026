#include <stdio.h>

int main() {
    double weight[6];
    double sum = 0;
    int i;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &weight[i]);
        sum += weight[i];
    }

    printf("%.1f", sum / 6);

    return 0;
}