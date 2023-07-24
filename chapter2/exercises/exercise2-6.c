#include <stdio.h>

unsigned setbits(unsigned x, int pos, int field, unsigned y);

int main() {
    unsigned x = 10;    //1010
    unsigned y = 6;     //0110
    printf("%d\n", setbits(x, 2, 2, y)); 
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return x & ~(~(~0 << n) << (p+1-n)) |
        (y & ~(~0 << n)) << (p+1-n);
}
