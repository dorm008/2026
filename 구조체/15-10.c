#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int height;
    float weight;
};

int main() {
    struct Student s[5], temp;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f",
              s[i].name,
              &s[i].height,
              &s[i].weight);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n",
               s[i].name,
               s[i].height,
               s[i].weight);
    }

    return 0;
}