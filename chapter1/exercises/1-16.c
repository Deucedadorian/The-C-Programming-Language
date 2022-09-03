#include <stdio.h>
#define MAXLINE 10 /* maximum input line size */

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
    char line[MAXLINE];     /* current input line */
    char outPut[MAXLINE];  /* longest line saved here */
    char temp[MAXLINE];
    int len;
    int gotMore = 0;
    int prevLine = 0;

    while ((len = getline1(line, MAXLINE)) > 0) {
        if(line[len - 1] != '\n') {
            prevLine += len;
            copy(temp, line);
            gotMore = 1;
        } else {
            len = prevLine + len;
            prevLine = 0;

            if (gotMore == 1) {
                copy(outPut, temp);
                outPut[len - 2] = '\n';
            } else 
                copy(outPut, line);
            printf("line is %d char(s) long\nline: %s", len, outPut);
            gotMore = 0;
        }
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline1(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
