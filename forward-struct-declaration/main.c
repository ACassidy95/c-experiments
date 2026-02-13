#include <stdio.h>
#include "struct.h"

int main() {
        const char*     pname;
        const char*     ename;
        int             eno;

        person_t        p;
        employee_t      e;

        pname = "Example Personson";
        ename = "Example Employeeson";
        eno = 1;

        p.name = pname;
        e.name = ename;
        e.employee_no = eno; 

        printf("The person is named %s\n", p.name);
        printf("The employee is named %s and has employee number %d\n", e.name, e.employee_no);

        return 0;
}
