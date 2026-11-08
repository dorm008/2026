#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    // 입력
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 내림차순 정렬
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 출력
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
