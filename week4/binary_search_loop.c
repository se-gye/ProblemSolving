#include <stdio.h>
#define SIZE 16

int bin_search_loop(int arr[], int size, int key) {
    int middle, low, high;

    low = 0;
    high = size-1;

    while (low <= high) {
        middle = (low+high) / 2;

        if (arr[middle] == key)
            return middle;
        else if (arr[middle] > key)
            high = middle - 1;
        else
            low = middle + 1;
    }

    return -1;
}

int main(void) {
    int arr[SIZE] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
    int key, i;

    printf("탐색할 배열:\n");
    for (i=0; i<SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    printf("탐색할 값을 입력하세요: ");
    scanf("%d", &key);

    printf("\n탐색 결과 Index = %d\n", bin_search_loop(arr, SIZE, key));
    return 0;
}