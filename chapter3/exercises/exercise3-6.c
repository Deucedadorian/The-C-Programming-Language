#include "../examples/headers/reverse.h"
#define abs(x)  ((x) < 0 ? -(x) : (x))

/* itoa: convert n to characters in s, w characters wide    */
void itoa(int n, char s[], int w) {
    int i, sign;
    
    sign = n;           /* record sign                      */
    i = 0;
    do {                /* generate digits in reverse order */
        s[i++] = abs(n % 10) + '0';     /* get next digit   */
    } while ((n /= 10) != 0);           /* delete it        */
    if (sign < 0)
        s[i++] = '-';
    while (i < w)                       /* pad with blanks  */
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}
