# Codes for Arrays in C



## Declaring an array  

The general syntax for declaring any array is - 

`<type> <name>[<size>]`

Here, in this example, we will try to declare an integer array. Look at the example given below.

```C
#include<stdio.h>
int main()
{
    int array[10];
    return 0;
}
```

The above example will declare an integer array with the name 'array' in the memory.

Comparing the code statement `int array[10];` with the general syntax of the array, we can observe that

* The 'type' of the array is `int`.
* The 'name' of the array is `array`.
* The 'size' of the array is `10`.

This is the most basic declaration statement for any array. The size of the array is defined by the constant value `10`.

The rules for declaring an array dictate that,

* The type should be a valid type in `C`. Here, we are using the data types we have studied earlier (`int`, `char`, `float` and `double`).
* The name of the array should follow the rules for declaring an identifier.
  * The name must not contain any special character like `!`, `@`,  `#`,  `$`,  `%`,  `^`,  `&`, `*` etc.
  * Only and underscore `_` can be used in the name of an identifier.
  * The name of an identifier cannot start with a digit - `123abc` is an **illegal** identifier name, however, you can have digits in the name of an identifier `abc123` is legal.
* The size of an array at the time of declaration must be an integer, preferably, a positive integer.

Similarly, we can declare arrays of other type, for ex - 

* `float`
* `double`
* `char` [These arrays are also known as strings and behave a little differently than the `int`, `float` and `double` arrays.]



______



## Programs on Arrays

* [Declaring an array. (Array Declaration)](https://github.com/dbc2201/gla-bcsc0001-2018/blob/master/codes/arrays/basic.c)  
* [Print array values (without initializing)](https://github.com/dbc2201/gla-bcsc0001-2018/blob/master/codes/arrays/initialize.c)  
* [Printing array values (after initializing)](https://github.com/dbc2201/gla-bcsc0001-2018/blob/master/codes/arrays/initialize2.c)  