#include <stdio.h>

struct Student {
    char name[21];
    int s1, s2, s3;
    int total;
};

void input(struct Student s[], int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d",
              s[i].name,
              &s[i].s1,
              &s[i].s2,
              &s[i].s3);

        s[i].total = s[i].s1 + s[i].s2 + s[i].s3;
    }
}

void sort(struct Student s[], int n)
{
    struct Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].total < s[j].total) {
                temp = s[i];
                s