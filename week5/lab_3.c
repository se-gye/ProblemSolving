#include <stdio.h>

//중복허용 후 순열
void pick(char *items[], int n, int *picked ,int m, int toPick) {
    int i, lastIndex;

    /*숫자
    if (toPick == 0) {
        for (i=0; i<m; i++)
            printf("%d ", picked[i]);
        printf("\n");
        return;
    }
    */
    //문자
    if (toPick == 0) {
        int picked_index;
        for (i=0; i<m; i++) {
            picked_index = picked[i];
            printf("%c ", items[picked_index]);
        }            
        printf("\n");
        return;
    }

    lastIndex = m - toPick - 1;
    /* 중복순열 (중복허용)
    for (i=0; i<n; i++) {        
        picked[lastIndex+1] = i;
        pick(items, n, picked, m, toPick-1);
    }
    */
    for (i=0; i<n; i++) {
        int j;
        int flag = 0;
        for (j=0; j<=lastIndex; j++)
            if (picked[j] == i)
                flag = 1;
        
        if (flag == 1) continue;

        picked[lastIndex+1] = i;
        pick(items, n, picked, m, toPick-1);
    }
}

int main() {
    char *items[] = {"AAA", "BBB", "CCC", "DDD", "EEE"};
    int picked[3];

    pick(items, 5, picked, 3, 3);
}