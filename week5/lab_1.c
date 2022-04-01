// 
#include <stdio.h>

// n개의 item에서 m개를 뽑고자 할 때
void pick(char *items, int n, int *picked, int m, int toPick) {
    int i, lastIndex, smallest;
    /*
    //Base Case(숫자)
    if (toPick == 0) {
        for (i=0; i<m; i++)
            printf("%d ", picked[i]);
        printf("\n");
        return;
    }
    */
   
    //Base Case(문자)
    if (toPick == 0) {
        int picked_index;
        for (i=0; i<m; i++) {
            picked_index = picked[i];
            printf("%c ", items[picked_index]);
        }            
        printf("\n");
        return;
    }

    //Recursive Case
    lastIndex = m - toPick - 1;
    if (toPick == m)
        smallest = 0;
    else
        smallest = picked[lastIndex] + 1;

    for (i=smallest; i<n; i++) {
        picked[lastIndex+1] = i;
        pick(items, n, picked, m, toPick-1);
    }
}

int main() {
    char items[] = "ABCDEFG";
    int picked[3];

    pick(items, 7, picked, 3, 3);
}