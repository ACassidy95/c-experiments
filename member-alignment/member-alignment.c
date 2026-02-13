#include <float.h>
#include <stdint.h>
#include <stdio.h>

struct inefficient {
        uint8_t                 a;
        uint64_t                b;
        uint16_t                c;
        uint32_t                d;
        long double             e;
        uint8_t                 f;
};

struct efficient {
        uint8_t                 a;
        uint8_t                 b;
        uint16_t                c;
        uint32_t                d;
        uint64_t                e;
        long double             f;
};

typedef struct inefficient      i_t;
typedef struct efficient        e_t;

int main() {
        i_t     i = { UINT8_MAX, UINT64_MAX, UINT16_MAX, UINT32_MAX, LDBL_MAX, UINT8_MAX };
        e_t     e = { UINT8_MAX, UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX, LDBL_MAX };

        i_t*    ip;
        e_t*    ep;

        ip = &i;
        ep = &e;

        size_t  i_s     = sizeof(i);
        size_t  ip_s    = sizeof(ip);
        printf("Inefficient layout size - struct: %3zu, pointer: %3zu\n", i_s, ip_s);

        size_t  e_s    = sizeof(e);
        size_t  ep_s   = sizeof(ep);
        printf("Efficient layout size - struct: %3zu, pointer: %3zu\n", e_s, ep_s);
        
        return 0;
}
