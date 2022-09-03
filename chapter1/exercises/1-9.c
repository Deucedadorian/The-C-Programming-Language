#include <stdio.h>

int main() {
    int c, lc;

    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lc != ' ')
                putchar(c);
        lc = c;
    }
}
