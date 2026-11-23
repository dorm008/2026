#include <stdio.h>

int main(void) {
    char name[20];
    int age;
    scanf("%19s", name);
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old.\n", name, age);
    return 0;
}