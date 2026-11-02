#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    switch(n) {
    case 2 :
        printf("28");
        break;
    case 4 :
        printf("30");
        break;
    case 6 :
        printf("30");
        break;
    case 9 :
        printf("30");
        break;
    case 11 :
        printf("30");
        break;
    default :
        printf("31");
        break;
    }
}