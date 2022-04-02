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

    printf("Ž���� �迭:\n");
    for (i=0; i<SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    printf("Ž���� ���� �Է��ϼ���: ");
    scanf("%d", &key);

    printf("\nŽ�� ��� Index = %d\n", sorted_seq_search(key, arr, 0, SIZE));
    return 0;
}