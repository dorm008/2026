#include <stdio.h>

int main(void) {
    char name[21];
    char school[21];
    int grade;
    scanf("%20s", name);
    scanf("%20s", school);
    scanf("%d", &grade);

    printf("Name : %s \nSchool : %s \nGrade : %d ", name, school, grade);
    return 0;
}