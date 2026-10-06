#include <stdio.h>

int main() {
    int max = 3;

    // 증가
    for (int i = 1; i <= max; i++) {
        for (int j = 0; j < i; j++) {
            printf("＊");
        }
        printf("\n");
    }

    // 감소
    for (int i = max; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("＊");
        }
        printf("\n");
    }

    return 0;
}