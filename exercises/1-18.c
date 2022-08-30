#include <stdio.h>

#define MAXLINE 1000

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

int main() {
    int c, len;
    char line[MAXLINE];

    while((c = getline1(line, MAXLINE)) > 0) {
        for(len = c; line[len - 2]==' ' || line[len - 2]=='\t'; --len) {
            line[len - 2] = '\n';
            line[len - 1] = '\0';
        }
        if (len >= 2)
            printf("%s", line);
    }
}

