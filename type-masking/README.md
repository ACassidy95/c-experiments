# Type Masking

This experiment is to see if two different types, defined over the same primitive type, can be directly operated together witout the need for helper functions to unwrap values.

## Experiment 1 - Basic Variables

### Set up

This experiment defines two types:

``` c
    typedef float celsius_t;
    typedef float fahrenheit_t;
```

It then assigns them values, and tests the following:
- Subtracts one from the other and stores that value in a variable of type float.
- Checks if the values are directly comparable in a simple if statement.

### Results

Types defined over the same primitive type **can** be direclty operated and compared.

- The subtraction operation is successful and was stored in a ```float``` type variable before printing successfully to the console.
- The comparisson of values was successful and was able to print the message reliant on the test passing. 

## Experiment 2 - Pointers

### Set up

Using the same types, this experiment examines if pointers of said variables behave in the same manner.

### Results

Pointers to types defined over the same primitive type are also directly interoperable and comparable.

- As in Exp 1, the subtraction operation succeeded and wsa stored in the ```float``` variable.
- Comparisson of values also succeeded for the pointers to the variables of type ```celsius_t``` and ```fahrenheit_t``` respectively.
