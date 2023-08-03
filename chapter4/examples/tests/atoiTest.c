#include "../atoi.c"
#include "../headers/getline.h"

#define MAXLINE 100

int main() {
    char line[MAXLINE];
    int getline1(char line[], int max);

    while (getline1(line, MAXLINE) > 0)
        printf("%d\n", atoi(line));
    return 0;
}
