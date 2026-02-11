#include <stdio.h>

typedef float celsius_t;
typedef float fahrenheit_t; 

int main() {
        celsius_t       c;
        fahrenheit_t    f;
        celsius_t*      pc;
        fahrenheit_t*   pf;
        float           cf_delta;

        c = 0.0;
        f = 32.0;

        pc = &c;
        pf = &f;

        cf_delta = *pc - *pf;
        printf("The difference between the contents of the pointers %p and %p is %f\n", pc, pf, cf_delta);

        if(pc != pf) {
                printf("Pointers to variables of types which are defined over the same primitive type are directly comparable.\n");
        }        

        return 0;
}
