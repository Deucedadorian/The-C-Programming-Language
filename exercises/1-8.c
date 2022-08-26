#include <stdio.h>

int main() {
    int c, b, t, nl;
    
    b = 0;
    t = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
    }
    printf("blanks: %d tabs: %d newlines: %d\n", b, t, nl);
}
