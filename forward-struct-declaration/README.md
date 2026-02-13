# Forward Struct Declarations

This experiment is to play around with the limits of forward declaration of structures, i.e. Declaring some struct in a header file without an implementation which is to be provided later.

## Experiment 1 - Differing Implementations

Given a forward declaration of some structure in ```struct.h``` can different implementations of the same forward-declared structure be defined as types?

### Setup

Given 

```c struct.h
struct person;
```

Can you define something like:

```c struct.c
typedef struct person {
    const char* name;
} person_t;
```

and also 

```c struct.c
typedef struct person {
    const char* name;
    const int   employee_no;
} employee_t;
```

### Results

**No** you cannot do this. The compilation for this code failed with message:

```
struct.c:11:1: error: redefinition of struct or union ‘struct person’
   11 | } employee_t;
      | ^
In file included from struct.c:2:
struct.h:4:8: note: originally defined here
    4 | struct person;
      |        ^~~~~~
```
