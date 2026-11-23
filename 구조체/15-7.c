#include <stdio.h>

struct Student {
    char name[20];
    int height;
};

int main() {
    struct Student human[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", human[i].name, &human[i].height);
    }

    int max = 0;  // 가장 큰 키를 가진 사람의 인덱스

    for (int i = 1; i < 5; i++) {
        if (human[i].height > human[max].height) {
            max = i;
        }
    }

    printf("%s %d\n", human[max].name, human[max].height);

    return 0;
}