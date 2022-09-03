#include <stdio.h>

#define NUM_CHARS 256

int main() {
    long charFreq[NUM_CHARS + 1];
    int c;
    int i, x;
    int maxVal = 0;

    for(i = 0; i <= NUM_CHARS; ++i)
        charFreq[i] = 0;

    while((c = getchar()) != EOF) {
        if(c < NUM_CHARS) {
            ++charFreq[c];
            if(charFreq[c] > maxVal)
                maxVal = charFreq[c];
        } else {
            ++charFreq[NUM_CHARS];
            if(charFreq[NUM_CHARS] > maxVal)
                maxVal = charFreq[NUM_CHARS];
        } 
    }
    printf("%d\n", maxVal);
    for(i = maxVal; i > 0; --i) {
        for(x = 0; x <= NUM_CHARS; ++x) {
            if(charFreq[x] >= i) {
                printf("*");
            } else if(charFreq[x] == 0)
                printf("");
            else {
                printf(" ");
            }
        } 
        printf("\n");
    } 
}
