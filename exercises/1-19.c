/* exercise 1-19 
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 * */

#include <stdio.h>

#define MAXLINE 1000

void copy(char from[], char to[]) {
    for (int i = 0; (to[i] = from[i]) != '\0'; ++i);
}

void reverse(char s[]) {
    char temp[MAXLINE];
    int i, sPlace;

    for (i = sPlace = 0; s[i + 1] != '\n'; ++i);

    copy(s, temp);
    for (i=i; i >= 0; --i) {
        s[i] = temp[sPlace];
        ++sPlace;
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

int main() {
    int c;
    char line[MAXLINE];

    while((c = getline1(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
}
