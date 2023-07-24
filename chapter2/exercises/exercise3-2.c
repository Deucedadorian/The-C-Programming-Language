#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main() {
    char t[10] = {'h', '\t', 'o', '\n', '7', 'e', 'e', 'n'};
    char s[10];
    for (int i = 0; i < 10; i++)
        s[i] = 0;

    escape(s, t);
    printf("result of using escape() on string:\n\n%s\n\n", s);

    unescape(s, t);
    printf("result of using unescape() on string:\n\n%s\n", s);
}

// replaces white space characters with an escape sequence 
void escape(char s[], char t[]) {
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
        switch(t[i]) {
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        default:
            s[j++] = t[i];
            break;
        }
    s[j] = '\0';
}

// replaces escape characters with white space
void unescape(char s[], char t[]) {
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
        if (t[i] != '\\')
            s[j++] = t[i];
        else
            switch(t[i]) {
                case 'n':
                    s[j++] = '\n';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
                    break;
            }
    s[j] = '\0';
}
