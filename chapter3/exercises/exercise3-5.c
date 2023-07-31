#include "../examples/headers/reverse.h"

/* itob: convert n to characters in s - base b              */
void itob(int n, char s[], int b) {
    int i, j, sign;

    if ((sign = n) < 0)             /* record sign          */
        n = -n;                     /* make n positive      */
    i = 0;
    do {            /* generate digits in reverse order     */
        j = n % b;                  /* get next digit       */
        s[i++] = (j <= 9) ? j+'0' : j+'a'-10;
    } while ((n /= b) > 0);         /* delete it            */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
