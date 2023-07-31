#include "../headers/itoa.h"
#include <stdio.h>

int main() {
    int y = 661;
    char strForMe[3] = {0, 0, 0};
    itoa(y, strForMe);
    printf("%s\n", strForMe);
    return 0;
}
