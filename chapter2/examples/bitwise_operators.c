#include <stdio.h>

unsigned getbits(unsigned x, int pos, int field);

int main() {
    unsigned x = 23; //23 = 10111 = 027 = 0x17
    unsigned get_bits = getbits(x, 5, 3);
    printf("%d\n", get_bits);
}

unsigned getbits(unsigned x, int p, int n) {
    //10111 >> 3 = 00010 & 00111 = 00010 = 2
    return (x >> (p+1-n)) & ~(~0 << n); 
}
