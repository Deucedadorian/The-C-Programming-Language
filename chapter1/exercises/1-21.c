#include <stdio.h>

#define TABSIZE 8

int main() {
    int c;
    int col = 0;
    int spaceChain = 0;
    int colOfLastChar = 0;
    int charBefore = 0;

    while((c = getchar()) != EOF) {
        ++col;
        if(c == ' ') {
            ++spaceChain;
        } else {
            while (spaceChain > 0) {
                if (spaceChain >= (TABSIZE - colOfLastChar)) {
                    putchar('\t');
                    spaceChain -= (TABSIZE - colOfLastChar);
                    colOfLastChar = 0;
                } else {
                    putchar(' ');
                    --spaceChain;
                }
            }
            if (c == '\n' || c == '\t') {
                col = 0; 
            }
            colOfLastChar = col;
            putchar(c);
        }
        if (col >= TABSIZE)
            col = 0;
    }
}
