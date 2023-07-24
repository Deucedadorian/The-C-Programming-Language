#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
    unsigned int x; int p, n;
    x = 10;  //1010 
    p = 2; n = 2;
    printf("%o\n", invert(x, p, n)); 
};

unsigned invert(unsigned x, int p, int n) {
    // ~(~0 << n) == 0011,  
    printf("%d\n", ~(~0 << n) << (p+1-n)); //0110
    return x ^ (~(~0 << n) << (p+1-n));  
}
