#include <stdio.h>

int main() {
    int n;
    int score[20];
    int i, j, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    // 내림차순 정렬
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (score[i] < score[j]) {
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    // 출력
    for (i = 0; i < n; i++) {
        printf("%d\n", score[i]);
    }

    return 0;
}