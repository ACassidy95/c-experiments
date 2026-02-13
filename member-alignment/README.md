# Struct Member Alignment

This experiment is to demonstrate how the layout of memory affects the size of objects by comparing a number of numerical types with the same number of members, of the same type, but
laid out differently

## Experiment 1 - sizeof Struct/Pointer Value

Given type definitions of two structs containing the same number of fields of the same types, laid out differently, examine the output of the sizeof operator applied
to struct and pointer variables of the given struct types.

### Setup

Given type definitions for the above structs

### Results

Print results of each sizeof operation:

```
Inefficient layout size - struct:  64, pointer:   8
Efficient layout size - struct:  32, pointer:   8
```

