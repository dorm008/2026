#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    switch(input) {
    case 1 :
        printf("dog");
        break;
    case 2 :
        printf("cat");
        break;
    case 3 :
        printf("chick");
        break;
    default :
        printf("blank");
    }
}