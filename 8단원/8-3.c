#include <stdio.h>

int main() {
    char str[26];
    int i;

    for (i = 0; i < 26; i++) {
        str[i] = 'A' + i;
    }

    for (i = 25; i >= 0; i--) {
        printf("%c ", str[i]);
    }

    return 0;
}