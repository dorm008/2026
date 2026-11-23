#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int height;
};

int main() {
    struct Student Human1, Human2, Human3, Human4, Human5;

    scanf("%s %d", Human1.name, &Human1.height);
    scanf("%s %d", Human2.name, &Human2.height);
    scanf("%s %d", Human3.name, &Human3.height);
    scanf("%s %d", Human4.name, &Human4.height);
    scanf("%s %d", Human5.name, &Human5.height);

    int min = Human1.height;
    char name[20];

    strcpy(name, Human1.name);

    if (Human2.height < min) {
        min = Human2.height;
        strcpy(name, Human2.name);
    }

    if (Human3.height < min) {
        min = Human3.height;
        strcpy(name, Human3.name);
    }

    if (Human4.height < min) {
        min = Human4.height;
        strcpy(name, Human4.name);
    }

    if (Human5.height < min) {
        min = Human5.height;
        strcpy(name, Human5.name);
    }

    printf("%s %d\n", name, min);

    return 0;
}