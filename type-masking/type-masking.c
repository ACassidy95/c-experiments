#include <stdio.h>

typedef float celsius_t;
typedef float fahrenheit_t;

int main() {
        celsius_t       c;
        fahrenheit_t    f;
        celsius_t*      pc;
        fahrenheit_t*   pf;
        float           cf_delta, cf_delta_p;
        size_t          p_delta;

        // Experiment 1:
        // Static variables
        c = 0.0;
        f = 32.0;

        cf_delta = c - f;
        printf("(Static variable) The delta between 0.0 (celsius_t) and 32.0(fahrenheit_t) is: %f\n", cf_delta);

        if (c != f) {
                printf("(Static variable) Values of type celsius_t and fahrenheit_t are directly comparable with the same underlying type\n");
        }

        // Experiment 2:
        // Pointers
        pc = &c;
        pf = &f;

        cf_delta_p = *pc - *pf;
        p_delta = pc - pf;
        printf("(Pointer) The delta between 0.0 (celsius_t*) and 32.0 (fahrenheit_t*) is: %f\n", cf_delta_p);
        printf("(Pointer) The delta between the addresses of the variables of type celsius_t* and fahrenheit_t* is: %d\n", p_delta);

        if (pc != pf) {
                printf("(Pointer) Values of type celsius_t* and fahrenheit_t* are directly comparable with the same underlying type\n");
        }
        
        return 0;
}
