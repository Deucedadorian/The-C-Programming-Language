#include <stdio.h>
#define LINEMIN 80
#define MAXLINE 1000

int getline1(char line[], int limit);

int main() {
    int c;
    char line[MAXLINE];
    
    while((c = getline1(line, MAXLINE)) > 0) 
        if (c > LINEMIN) 
            printf("%s", line);
}

/* getline: read a line into s, return length */
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

