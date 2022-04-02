#include <stdio.h>
#define SIZE 16

int bin_search_recursion(int key, int arr[], int low, int high) {
    int middle;

    if (low > high)
        return -1;

    middle = (low+high) / 2;

    if (arr[middle] == key)
        return middle;
    else if (arr[middle] > key)
        return bin_search_recursion(key, arr, low, middle-1);
    else   
        return bin_search_recursion(key, arr, middle+1, high);
}

int main(void) {
    int arr[SIZE] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
    int key, i;

    printf("Ž���� �迭:\n");
    for (i=0; i<SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    printf("Ž���� ���� �Է��ϼ���: ");
    scanf("%d", &key);

    printf("\nŽ�� ��� Index = %d\n", bin_search_recursion(key, arr, 0, SIZE));
    return 0;
}