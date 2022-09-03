#include <stdio.h>

#define ARRLEN 11
int main() {
    int lenArr[ARRLEN];
    int c, wordlen, inSpace, longestIndex;
    int i, x;

    inSpace = wordlen = longestIndex = 0;

    for (i = 0; i < ARRLEN; ++i)
        lenArr[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if(inSpace == 0) {
                if (wordlen <= ARRLEN - 1)
                    ++lenArr[wordlen - 1];
                else
                    ++lenArr[ARRLEN - 1];
                if (lenArr[wordlen - 1] > longestIndex)
                    longestIndex = lenArr[wordlen - 1];
                wordlen = 0;
                inSpace = 1;
            }
        } else {
            ++wordlen;
            inSpace = 0;
        } 
    }

    for (i = longestIndex; i > 0; --i) {
        for (x = 0; x < ARRLEN; ++x) {
            if (lenArr[x] >= i)
                printf("/ ");
            else
                printf("  ");
        }
        printf("\n");
    } 
    printf("1 2 3 4 5 6 7 8 9 10 >10\n");
}
