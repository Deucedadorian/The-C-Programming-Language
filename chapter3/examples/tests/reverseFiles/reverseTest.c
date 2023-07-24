#include "../../headers/reverse.h"
#include <stdio.h>

int main() {
    char testString[11] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    printf("Test string: %s\n", testString);
    reverse(testString);
    printf("String after reverse: %s\n", testString);
}
