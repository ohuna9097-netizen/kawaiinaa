//선택정렬 : 현재 위치 뒤의 정렬되지 않은 부분에서 최솟값을 찾아 교환
#include <stdio.h>

int main(){
    int number[] = {3,7,12,24,45};
    int size = sizeof(number) / sizeof(number[0]);
    int min, temp;

    for (int i=0; i<size-1; i++) {
        min = i;

        for (int j = i + 1; j < size; j++) {
            if (number[j] < number[min]) {
                min = j;
            }
        }
        
        temp = number[i];
        number[i] = number[min];
        number[min] = temp;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}