#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */

float convert(float fahr);

int main() {
    float fahr;
    int i;

    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3.0f %6.1f\n", fahr, convert(fahr));
}

float convert(float fahr) {
    float celsius;

    celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}
