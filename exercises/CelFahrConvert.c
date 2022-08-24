#include <stdio.h>

/* convert Celsius temperatures to Fahrenheit */

int main() {
    float fahr, cel;
    int upper, lower, step;
    
    upper = 300;
    lower = 0;
    step = 20;

    cel = lower;
    while (cel <= upper) {
        fahr = cel * (9.0/5.0) + 32.0;
        printf("%3.0f %6.0f\n", cel, fahr);
        cel = cel + step;
    }
}
