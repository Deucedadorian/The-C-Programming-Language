#include "headers/getline.h"
#include <stdio.h>

#define MAXLINE 100

/* rudimentary calculator */
int main() {
    double sum, atof(char []);
    char line[MAXLINE];
    int getline1(char line[], int max);

    sum = 0;
    while (getline1(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
