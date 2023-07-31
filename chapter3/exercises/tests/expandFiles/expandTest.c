#include "../../headers/expand.h"
#include <stdio.h>

/* a program to test expand function by taking input and expanding
 * any shorthand notation with the expand function                  */
#define MAXSTRING 1000

int main() {
    int i, j, c;
    char string1[MAXSTRING], string2[MAXSTRING];

    for (i = 0; i < MAXSTRING; i++) 
        string1[i] = 0;

    j = 0;
    while ((c = getchar()) != EOF) 
        string1[j++] = c; 
    expand(string1, string2);
    printf("%s\n", string2);
}
