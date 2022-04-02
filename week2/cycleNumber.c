#include <stdio.h>

int get_cycle_number(int n) {
    int ret = 1;

    printf("%d", n);
    while (n != 1) {        
        if (n % 2 == 0)
            n = n / 2;
        else   
            n = n * 3 + 1;

        printf(" %d", n);
        ret++;        
    }
    return ret;
}

int main(void) {
    int n = 22;
    
    printf("\n사이클 길이는 %d\n", get_cycle_number(n));
}