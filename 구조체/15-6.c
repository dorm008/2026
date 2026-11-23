#include <stdio.h>

struct Student {
    char Name[20];
    int height;
};

int main(void) {
    struct Student Human1;
    scanf("%s %d", Human1.Name, &Human1.height);

    struct Student Human2;
    scanf("%s %d", Human2.Name, &Human2.height);

    struct Student Human3;
    scanf("%s %d", Human3.Name, &Human3.height);

    printf("%s : %dcm\n", Human1.Name, Human1.height);
    printf("%s : %dcm\n", Human2.Name, Human2.height);
    printf("%s : %dcm\n", Human3.Name, Human3.height);

    return 0;
}