#include <stdio.h>

typedef float celsius_t;
typedef float fahrenheit_t;

int main() {
        celsius_t       c;
        fahrenheit_t    f;
        float           cf_delta;

        c = 0.0;
        f = 32.0;

        cf_delta = c - f;
        printf("The delta between 0.0 (celsius_t) and 32.0(fahrenheit_t) is: %f\n", cf_delta);

        if (c != f) {
                printf("Values of type celsius_t and fahrenheit_t are directly comparable with the same underlying type\n");
        }
        
        return 0;
}
