#include <stdio.h>

#define MAXCOL 10 
#define TABSIZE 8

char line[MAXCOL];

void printl(int pos);

int main() {
    int c, pos;
    pos = 0;
    while((c = getchar()) != EOF) {
        line[pos++] = c;
        if (pos >= MAXCOL || c == '\n') {
            printl(pos);
            pos = 0;
        }
    } 
}

void printl(int pos) {
    int i;
    for(i = 0; i < pos; ++i)
        putchar(line[i]);
    if (pos > 0)
        putchar('\n');
}
