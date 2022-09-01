#include <stdio.h>

#define TABSIZE 4   /* number of characters per tab */

int main() {
   int c, col;

   col = 1;
   while ((c = getchar()) != EOF) {
       if (c == '\t') {
           while (col <= TABSIZE) {
               putchar(' ');
               ++col;
           }
       } else {
           putchar(c); 
           ++col;
       }
       if (col == TABSIZE + 1 || c == '\n')
           col = 1;
   }
}
