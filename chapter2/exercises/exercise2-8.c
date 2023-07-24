#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main() {
    unsigned x; int n;
    x=10; n=5;

    printf("%d\n", rightrot(x, n));
}

unsigned rightrot(unsigned x, int n) {
    int wordlength(void);
    int rbit;           // rightmost bit
    
    while (n-- > 0) {
        rbit = (x & 1) << (wordlength() - 1);
        x = x >> 1;     // shift x 1 position right
        x = x | rbit;   // complete one rotation
    }
    return x;
}

int wordlength() {
    int i;
    unsigned v = (unsigned) ~0;
    for (i = 1; (v = v >> 1) > 0 ; ++i)
        ;
    return i;
}

