#include <stdio.h>
#define SIZE 9

int sorted_seq_search(int key, int arr[], int low, int high) {
    int i;

    for (i=low; i<=high; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

int main(void) {
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9};
    int key, i;

    printf("탐색할 배열:\n");
    for (i=0; i<SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    printf("탐색할 값을 입력하세요: ");
    scanf("%d", &key);

    printf("\n탐색 결과 Index = %d\n", sorted_seq_search(key, arr, 0, SIZE));
    return 0;
}