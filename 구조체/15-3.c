#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
};

int main(void) {
    struct Student Human1, Human2;

    strcpy(Human1.name, "Yejun");
    Human1.age = 12;

    strcpy(Human2.name, "sujin");
    Human2.age = 13;

    printf("Your name: %s, age: %d\n", Human1.name, Human1.age);
    printf("Friend's name: %s, age: %d\n", Human2.name, Human2.age);

    return 0;
}