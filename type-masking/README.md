# Type Masking

This experiment is to see if two different types, defined over the same primitive type, can be directly operated together witout the need for helper functions to unwrap values.

## Set up

This experiment defines two types:

``` c
    typedef float celsius_t;
    typedef float fahrenheit_t;
```

It then assigns them values, subtracts one from the other, and sees if the values are directly comparable in a simple if statement

---

# Results

Types defined over the same primitive type **can** be direclty operated and compared.

- The subtraction operation is successful and was stored in a ```float``` type variable before printing successfully to the console
- The comparisson of values was successful and was able to print the message reliant on the test passing. 
