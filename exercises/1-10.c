#include <stdio.h>

int main() {
    int c, d;

    while ((c = getchar()) != EOF) {
        d = 0;
        if (c == '\t') {
            printf("\\t");
            d = 1;
        }
        if (c == '\b') {
            printf("\\b");
            d = 1;
        }
        if (c == '\\') {
            printf("\\\\");
            d = 1;
        }
        if (d == 0)
            putchar(c);
    }
}
