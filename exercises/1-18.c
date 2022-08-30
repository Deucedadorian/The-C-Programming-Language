#include <stdio.h>

#define MAXLINE 1000

int getline1(char line[], int limit);

int main() {
    int c;
    char line[MAXLINE];

    while((c = getline1(line, MAXLINE)) > 0) {
        for(c = c; line[c - 2]==' ' || line[c - 2]=='\t'; --c) {
            line[c - 2] = '\n';
            line[c - 1] = '\0';
        }
    if (c > 2)
        printf("%s", line);
    }
}

int getline1(char line[], int limit) {
    int c, i;

    for (i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
