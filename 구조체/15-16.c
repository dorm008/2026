#include <stdio.h>

struct Person {
    int height;
    double weight;
};

struct Person child(struct Person father, struct Person mother)
{
    struct Person student;

    student.height = (father.height + mother.height) / 2 + 5;
    student.weight = (father.weight + mother.weight) / 2.0 - 4.5;

    return student;
}

int main()
{
    struct Person father, mother, student;

    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    student = child(father, mother);

    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);

    return 0;
}