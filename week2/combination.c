#include <stdio.h>

void pick(int n, int picked[], int m, int toPick) {
    int i, smallest, lastIndex;

    // trivial case
    if (toPick == 0) {  //더이상 뽑아야할 숫자 X
        for (i=0; i<m; i++)
            printf("%d ", picked[i]);
        printf("\n");
        return;
    }

    // recursive case
    lastIndex = m - toPick - 1;

    if (toPick == m)  //하나도 안뽑혔을 때
        smallest = 0;  //0부터 뽑자
    else  //하나 이상 뽑혔을 때
        smallest = picked[lastIndex] + 1;

    for (i=smallest; i<n; i++) {
        picked[lastIndex+1] = i;
        pick(n, picked, m, toPick-1);
    }
}

int main(void) {
    int picked[3];
    pick(7, picked, 3, 3);
}