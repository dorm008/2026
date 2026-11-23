#include <stdio.h>

struct Student {
    char Name[50];
    int age;
};

int main(void) {
    struct Student Human1;
    scanf("%49s %d", Human1.Name, &Human1.age);

    struct Student Human2;
    scanf("%49s %d", Human2.Name, &Human2.age);

    struct Student Human3;
    scanf("%49s %d", Human3.Name, &Human3.age);

    printf("Name : %s\nAge : %d\n", Human1.Name, Human1.age);
    printf("Name : %s\nAge : %d\n", Human2.Name, Human2.age);
    printf("Name : %s\nAge : %d\n", Human3.Name, Human3.age);

    return 0;
}