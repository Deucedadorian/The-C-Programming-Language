#include "../headers/itob.h"
#include <stdio.h>

int main() {
    int c;
    char s[2] = {'0', '0'};

    scanf("%d", &c);
    itob(c, s, 16);  
    printf("%s\n", s);
}
