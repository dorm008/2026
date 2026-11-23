#include <stdio.h>
#include <string.h>

struct Student {
    char School[20];
    int grade;
};

int main(void) {
    struct Student Human2;

    strcpy(Human2.School, "Jejuelementary");
    Human2.grade = 6;

    struct Student Human1;

    scanf("%s %d", Human1.School, &Human1.grade);

    printf("%d grade in %s School\n", Human2.grade, Human2.School);
    printf("%d grade in %s School\n", Human1.grade, Human1.School);

    return 0;
}