#include <stdio.h>

#define MAXCOL 50       /* length of line before line "folds" */
#define TABSIZE 8
#define MAXLINE 1000

int lineLength(char currentChar);
int foldLine(char line);

int main() {
    int c;
    char line[MAXLINE];

    while ((c = getchar()) != EOF) {
        if (lineLength(c) > MAXCOL)
            foldLine(line);
    }
}
