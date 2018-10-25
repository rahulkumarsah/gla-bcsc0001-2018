# Super Practice Set 1 (for Mid Sem II)



![](https://images.pexels.com/photos/442574/pexels-photo-442574.jpeg?auto=compress&cs=tinysrgb&h=650&w=940)



## General Instructions

1. Read the question given below carefully.

2. If you do not understand something from the practice set, you are free to search it on Google or email me.

3. The command for compiling a C program on a Linux based Operating System is

   `gcc filename.c -o filename.out`

   Once you have successfully compiled the program and the console shows no errors or warning, you can now execute the program by using the following command 

   `./filename.out`

   If you wish to compile the program in a Windows Operating System, the command is

   `gcc filename.c -o filename.exe`

   Once you have successfully compiled the program and the console shows no errors or warning, you can now execute the program by using the following command 

   `filename.exe`

   To use the `math.h` header file, you have to write `-lm` with the command

   for ex -

   `gcc filename.c -lm -o filename.out`

   `./filename.out`

4. The practice set is divided into all kinds of questions, if you do not understand a part of code, it is better if you try to compile it. You are still free to ask me for help.

___



## General Questions



### Question 1

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    return 0;
}
```



___



### Question 2

What will be the output of the following program?

```C
#include <stdio.h>
#define PI 3.142
int main()
{
    int radius = 5;
    float area = 0.0f;
    
    printf("Radius of the circle is %d.\n", radius);
    
    area = PI * radius * radius;
    
    printf("Area of circle having %d radius is %.2f.\n", radius, area);
    
    return 0;
}
```



___



### Question 3

What will be the output of the following program? Also, re-write this program to take the value of the number from the user.

```C
#include <stdio.h>
int main()
{
    int number = 48;
    
    if ( number > 48 )
    {
        printf("The number you entered is %d.\n", number);
    }
    	
    return 0;
}
```



___



### Question 4

What will be the output of the following program? Also, re-write the program to take the value of the character and the integer variable from the user.

```C
#include <stdio.h>
int main()
{
    int number = 22, ctr = 0;
    char character = '*';

    while ( ctr < number )
    {
        printf("%c", character);
        ctr = ctr + 1;
    }
    printf("\n");

    return 0;
}
```



___



### Question 5

What will be the output of the following program?

```C
#include <stdio.h>

float calc_interest(int principal, float interest_rate, int years);

int main()
{

    float amount;

    amount = calc_interest( 100, 6.0f, 2);

    printf("Interest on Rs %d for %d years at %.2f rate is Rs %.2f", 100, 2, 6.0f, amount);

    return 0;
}


float calc_interest(int principal, float interest_rate, int years)
{
    float interest_amount;
    interest_amount = principal * ( interest_rate / 100 ) * years;
    return interest_amount;
}
```



___



## Programming and debugging skills 1

* Correct the syntax errors in the following program.

  ```C
  #define LENGTH = 10;
  #include <stdio.h>
  int main
  {
  	int width = 5;
  	int area = LENGTH X width;
  	printf(Area = %d/n, area);
  	return 0;
  }
  ```

* Locate the syntax errors in the following code segment.

  ```C
  int X, int Y;
  scanf('%d', X);
  if x < 0
      printf('Only positive integers');
  else {
      Y = X * X;
      printf('Vaue of Y = ', Y);
  }
  ```

* Write a program that accepts two integers from the keyboard and prints their average. Replace the sequence `int main()` with `int main(void)` and `main()` and drop the `return` statement. Does the program still compile and execute properly?

* The following code section compiles correctly but doesn't work properly. What is wrong with it?

  ```C
  int x;
  while ( x < 10 )
      printf("This statement is executed 10 times\n");
  printf("Quitting...\n");
  ```

* Write a program that uses a `while` loop to print the integeres from 1 to 10. If you replace the `<` operator with `<=`, what else do you need to do to obtain the same output?

* What is the following program meant to display? Now try out the following.

  * Remove the function declaration. Does the program compile?

  * Change the function arguments from int to float. How does the output change and why?

    ```C
    #include <stdio.h>
    float fun(int x, int y);
    int main(void)
    {
        float result;
        result = fun(5, 8);
        printf("%f\n", result);
        printf("%f\n", fun(5.5, 8.5));
        return 0;
    }
    float fun(int x, int y)
    {
        float z;
        z = (x + y) / 2.0;
        return z;
    }
    ```



___



## Data - Variables and Constants



### Question 1

What will be the output of the following program?

```C
#include <Stdio.h>
int main()
{
    int x1, x2, x3 = 63;
    x1 = x2 = -22;
    
    float f1;
    float f2 = 30.48;
    
    printf("x1 = %d, x2 = %d, x3 = %d\n", x1, x2, x3);
    printf("f1 = %f, f2 = %f\n", f1, f2);
    
    f1 = 1203.67;
    printf("f1 = %f\n", f1);
    
    return 0;
}
```



___



### Question 2

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    printf("Size of char : %d bytes.\n", sizeof(char));
    printf("Size of short : %d bytes.\n", sizeof(short));
    printf("Size of int : %d bytes.\n", sizeof(int));
    printf("Size of long : %d bytes.\n", sizeof(long));
    printf("Size of float : %d bytes.\n", sizeof(float));
    printf("Size of double : %d bytes.\n", sizeof(double));
    printf("Size of long double : %d bytes.\n", sizeof(long double));

    printf("Size of 34 : %d bytes.\n", sizeof 34);
    printf("Size of 3.142 : %d bytes\n", sizeof(3.142));

    // use the follwing statement only if your compiler support long long

    //printf("Size of long long : %d bytes.\n", sizeof(long long));

    return 0;
}
```



___



### Question 3

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    short s = 32767;
    int i = -65;
    unsigned long l = 400000;

    printf("s:\n");
    printf("Decimal : %hd, Octal : %ho, Hexadecimal : %hx\n", s, s, s);
    printf("i : %d\n", i);
    printf("l : %lu\n", l);

    s = s + 1;
    printf("short s after increment : %hd\n", s);

    printf("i printed with %%u : %u\n", i);
    i = 123456;
    printf("i printed with %%d : %d, with %%hd : %hd\n", i, i);

    return 0;
}
```



___



### Question 4

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    float pi1 = 3.142, pi2 = 0.3142E1, pi3 = 3142E-3;

    float f = 12345.678901234567890;
    double d = 12345.678901324567890;
    float sensex1 = 25341.86;
    float sensex2, gain;

    printf("pi1 = %f, pi2 = %e, pi3 = %g\n", pi1, pi2, pi3);
    printf("f = %.15f\n", f);
    printf("d = %.15f\n", d);

    //uncomment the following commented lines if your computer supports long double

    //long double ld = 13245.678901234567890;
    //printf("ld = %.20Lf\n", ld);

    sensex2 = 46556.25;

    gain = (sensex2 - sensex1) / sensex1 * 100;
    printf("Sensex returns since March 31 : %f%%\n", gain);

    return 0;
}
```



___



### Question 5

What will be the ouput of the following program?

```C
#include <stdio.h>
int main()
{
    char let1 = 'A';
    short let2 = 97;
    char let3 = '9';
    int let4 = 7;

    printf("'%c' = %d\n", let1, let1);

    printf("'%c' = %d\n", let2, let2);

    printf("'%c' = %d\n", let3, let3);

    printf("'%c' = %d\n", let4, let4);

    return 0;
}
```



___



### Question 6

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    char letB, letD, leta, digit4;
    letB = 'A' + 1;
    letD = letB + 2;
    leta = 'A' + 32;
    digit4 = '0' + 4;
    
    printf("letB = %c | %d\n", letB, letB);
    
    printf("letD = %c | %d\n", letD, letD);
    
    printf("leta = %c | %d\n", leta, leta);
    
    printf("digit4 = %c | %d\n", digit4, digit4);
    
    return 0;
}
```



___



### Question 7

Write a program to use the following escape sequence characters

* \a : Bell
* \b : Backspace
* \c : No newline (cursor in same line)
* \f : Formfeed
* \n : Newlline
* \r : Carriage return
* \t : Tab
* \v : Vertical Tab
* \ \ : Vertical tab (use without spaces)
* \ *n* : ASCII character represented by the octal value *n*, where *n* can't exceed 0377 (decimal value 255)
* \x*n* : ASCII character represented by the hexadecimal value *n*, where *n* can't exceed 0xFF (decimal value 255)

After you write the program, modify the program to print the ASCII values of the escape sequence characters too.



___



### Question 8

What will be the output of the following program?

```C
#define LOOP_VAR 50
#include <stdio.h>

int main()
{
    char letter = 'A';

    printf("Size in bytes of the fundamental data types on this machine:\n");
    printf("int : %d, long : %d, float : %d, double : %d, long double : %d\n",
            sizeof(int), sizeof(long), sizeof(float), sizeof(double), sizeof(long double));
    printf("Size of constants on this machine:\n");
    printf("Size of 34 = %d bytes\n", sizeof 34);
    printf("Size of 'A' = %d bytes\n", sizeof 'A');
    printf("Size of letter which is set to 'A' = %d bytes\n", sizeof letter);
    printf("Size of 34L = %d bytes\n", sizeof 34L);
    printf("Size of 3.142 = %d bytes\n", sizeof 3.142);
    printf("Size of 3.142F = %d bytes\n", sizeof 3.142F);
    printf("Size of 3.142L = %d bytes\n", sizeof 3.142L);
    printf("Size of LOOP_VAR = %d bytes\n", sizeof(LOOP_VAR));

    printf("Size of string \"Baahubali\" = %d bytes.\n", sizeof("Baahubali"));

    return 0;
}
```



___



### Question 9

What will be the output of the following program?

```C
#include <stdio.h>

#define LOOP_MAX 3

int main()
{
    short index = 0;
    int array[3];
    char string[5] = {'K', 'i', 't', 'k', 'a', 't', '\0'};

    array[0] = 111;
    array[1] = 222;
    array[2] = 333;

    printf("Elements of int array: ");

    while ( index < LOOP_MAX )
    {
        printf("%d\t", array[index]);
        index++;
    }
    printf("\n");

    printf("array[0] = %c\n", string[0]);
    printf("char array 'string' actually stores the string \"%s\"\n", string);
    printf("size of string : %d bytes\n", sizeof(string));
    printf("size of \"Kitkat\" : %d bytes\n", sizeof("Kitkat"));

    return 0;
}
```



___



## Concept Based Questions

1. Spot the valid variable names

   1. bit-rate
   2. upload_speed
   3. __width
   4. a1,
   5. 2017_month

2. How many elements are there in "abcd"?

3. Will the following code segment print properly? Explain with reasons.

   ```C
   char stg1[6] = {'N', 'o', 'u', 'g', 'a', 't'};
   char stg2[] = "Nougat";
   printf("%s\n", stg1);
   printf("%s\n", stg2);
   ```

4. Since 'A' is actually in integer, will `printf("%c", 'A');` display the same output as `printf("%d", 'A');`? Explain with reasons.



___



## Programming & Debugging Skills 2



1. Why does the following code section print a negative number? How do you rectify it?

   ```C
   short x = 40000;
   printf("x = %hd\n", x);
   ```

2. Write only assignment statements to swap the values of two variables x and y using a temporary variable t.

3. What will the following program display on a computer with a 2-byte short and 4-byte int? Provide the arithmetic to support your answer. Also, change the program to print correctly.

   ```C
   #include <stdio.h>
   int main()
   {
       short s = 40000;
       int i = 2200000000;
       printf("s = %hd, i = %d\n", s, i);
       return 0;
   }
   ```

4. Write a program that accepts a positive integer from the user and prints the value in decimal, octal and hexadecimal.

5. Write a program that assigns the maximum values of an unsigned short (typically, 2 bytes) and unsigned int (typically, 4 bytes) to two variabes. What is the output when you print ont more than this maximum value with `printf`? Explain with reasons.

6. Study the following program and answer the following questions.

   1. What does the program display?

   2. Is there any difference between the two lines of output?

   3. Why was the second `printf` statement provided?

   4. If both loops performed an additioanl iteration, what woudl be the next item to be printed?

      ```C
      #include <stdio.h>
      int main()
      {
          char c = '0';
          short s = 0;
          while ( c <= '9' )
          {
              printf("%c ", c);
              c = c + 1;
          }
          printf("\n");
          while ( s <= 9 )
          {
              printf("%hd ", s);
              s++;
          }
          return 0;
      }
      ```

7. Write a program that uses two `while` loops to populate a 6-element `long` array with the first 6 positive integers and a 7-element `char` array with the first 6 (not 7) letters of the English alphabet. After printing both arrays, set the 7th element of the `char` array to '\0' and then reprint this array. Explain your observations.



___



## Operators and Expressions



### Question 1

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int mileage = 17;
    float distance = 420;
    char answer = 'n';

    printf("Printing value of expressions:\n");
    printf("distance / mileage has the value %.2f\n", distance / mileage);
    printf("mileage = 20 has the value %d\n", mileage  = 20);
    printf("answer == 'y' has the value %d\n", answer == 'y');
    printf("answer = 'y' has the value %d\n", answer = 'y');
    printf("++mileage has the value %d\n", ++mileage);

    printf("This printf expression has the value %d\n", printf("C Programming \n"));

    return 0;
}
```



___



### Question 2

What will be the output of the following program if the user inputs 5, 100 and -6?

```C
#include <stdio.h>

#define FIRST_NUMBER 1

int main()
{
    int last_number, pairs, result, sum_pair;

    printf("Enter the last number: ");
    scanf("%d", &last_number);

    if ( (last_number % 2) == 1 )
    {
        printf("Not an even number\n");
        return 0;   //  terminates the program
    }
    sum_pair = FIRST_NUMBER + last_number;
    pairs = sum_pair / 2;
    result = pairs * sum_pair;

    printf("Sum of first %d integers = %d\n", last_number, result);

    printf("Difference between first and last integer = %d\n", last_number - FIRST_NUMBER);

    return 0;
}
```



___



### Question 3

What will be the output of the following program?

```C
#include <stdio.h>

int main()
{
    char char1 = 1, char2 = 1;
    short short1 = 1, short2 = 1;
    int int1 = 9, int2 = 5;

    // char and short automatically promoted to int
    printf("Size of char1 = %d bytes\n", sizeof char1);
    printf("Size of char1 * char2 = %d\n", sizeof(char1 * char2));
    printf("Size of short1 = %d\n", sizeof short1);
    printf("Size of short1 * short2 = %d\n", sizeof(short1 * short2));

    //automatic conversion on int to float. First 2 cases prevent truncation in integer division but not 3rd one.
    printf("1. 9.0f / 5 = %f\n", 9.0 / 5);
    printf("2. 1.0 * int1 / int2 = %f\n", 1.0 * int1 / int2);
    printf("3. int1 / int2 * 1.0 = %f\n", int1 / int2 * 1.0);

    return 0;
}
```



___



### Question 4

What will be the ouput of the following program if the user inputs `3 5 6`?

```C
#include <stdio.h>
int main()
{
    int int1, int2, int3;
    float average;

    printf("The value of pi is %.8f\n", (float) 22 / 7);

    printf("Enter three integers separated by a space: ");
    scanf("%d %d %d", &int1, &int2, &int3);

    average = (float) (int1 + int2 + int3) / 3;

    printf("Averaege of the three integers = %f\n", average);

    printf("Size of int1 = %d\n", sizeof int1);

    printf("Size of (short) int1 = %d\n", sizeof ((short) int1));

    return 0;
}
```



___



### Question 5

What will be the output of the following program if the user inputs 40?

```C
#include <stdio.h>
int main()
{
    float f, celsius;
    short year = 2014, years_left;

    f = 7 * 8 + 9 - 16 / 4;
    printf("1. %.2f\n", f);

    f = 7 * (8 + 9) - 16 / 4;
    printf("2. %.2f\n", f);

    years_left = 4 - year % 4;
    printf("3. years_left = %hd\n", years_left);

    printf("4. Enter the temperature in celsius ");
    scanf("%f", &celsius);

    printf("5. %.2fC = %.2fF (Correct)\n", celsius, celsius * 9 / 5 + 32);
    printf("6. %.2fC = %.2fF (Incorrect)\n", celsius, 9 / 5 * celsius + 32);

    return 0;
}
```



___



**IMPORTANT**: You must not prefix or postfix a variable multiple times in function arguments or in the same expression, for ex -

```C
int i = 0;
printf("The first three integers after 0 are %d, %d, %d\n", i, i++, i++);
```

or

```C
int i = 3, sum;
sum = (i * i) + (--i * i) + (--i * i);
prinntf("%d\n", sum);
```



___



### Question 6

What will be the output of the following program if the user inputs `2 8`?

```C
#include <stdio.h>

#define LAST_INT 100

int main()
{
    int a = 3, slno = 1;
    int inta = 0, total1 = 0;
    int intb = 0, base, power, total2 = 1;

    printf("%d. Initial value of a = %d\n", slno++, a);

    a += 5;

    printf("%d. a += 5 = %d\n", slno++, a);
    printf("%d. a /= 2 = %d\n", slno++, a /= 2);
    printf("%d. a *= 6 = %d\n", slno++, a *= 6);
    printf("%d. a -= 3 = %d\n", slno++, a -= 3);
    printf("%d. a %%= 6 = %d\n", slno++, a %= 6);

    while ( inta < LAST_INT + 1 )
    {
        total1 += inta;
        inta++;
    }

    printf("%d. Total of first %d integers = %d\n", slno++, LAST_INT, total1);

    printf("%d. Enter two numbers: ", slno++);

    scanf("%d%d", &base, &power);

    while ( ++intb < power + 1 )
    {
        total2 *= base;
    }

    printf("%d. %d to the power %d = %d\n", slno++, base, power, total2);

    return 0;
}
```



___



### Question 7

What will be the output of the following program if the user inputs `7 3 3` and `5 7 9`?

```C
#include <stdio.h>
int main()
{
    int i1, i2, i3, i4;

    printf("Enter the three integers: ");
    scanf("%d %d %d", &i1, &i2, &i3);

    printf("i1 = %d, i2 = %d, i3 = %d\n", i1, i2, i3);

    printf("i1 > i2 = %d\n", i1 > i2);

    printf("i2 < i3 = %d\n", i2 < i3);

    printf("i2 == i3 = %d\n", i2 == i3);

    printf("i1 > i2 && i2 == i3 = %d\n", i1 > i2 && i2 == i3);

    printf("i1 < i2 || i2 != i3 = %d\n", i1 < i2 || i2 != i3);

    i4 = i1 > i2 ? 50 : 100;
    printf("i1 > i2 ? 50 : 100 -- has value %d\n", i4);
    printf("%d\n",
        i1 > i2 ? printf("Note i1 > i2\n") : printf("Note i1 <= i2\n"));

    return 0;
}
```



___



## Concept Based Questions

1. What will be the value of x in the following code segment?

   ```C
   int x = 1;
   x = x - -5;
   ```

2. If x = 9 and y = 5, describe three ways of evaluating the expression x / y without truncating the fraitonal part.

3. What is the size of the constant 1.0?

4. Explain the difference in output of the following statement.

   ```C
   printf("%d\n", 3, 5);
   printf("%d\n", (3, 5));
   ```

5. Will the following code work? Explain with reasons.

   ```C
   int x;
   printf("Enter an integer: ");
   scanf("%d", &x);
   x % 2 ? printf("Odd") : printf("Even");
   ```

6. Explain the circumstances in which the entire expression is not evaluated.

   1. ````C
      a > b || c < d
      ````

   2. ```C
      a > b && c < d
      ```



___



## Programming & Debugging Skills 3

1. Write a program that computes and prints the quotient and remainder of a division of two integers that are accepted fromt he keyboard with `scanf`.

2. Write a program that accepts the dimensions of a rectangle as an integer and floating point number and prints the area and perimeter.

3. Using the temperature-conversion formaula `C / 5 = ( F - 32 ) / 9`, write a program that accepts a temperature (in decimal) in Fahrenheit and prints the converted temperature in Celsius without using a cast. Modify the program to use a cast and note your observations.

4. Write a program that accpets an integer fromt he keyboard and prints "ODD" or "EVEN" depending on its value.

5. Write a program that accepts the time taken as hours, minutes and seconds as 3 integers and prints the total number of seconds.

6. Write a program to accept the file size in MB (megabytes) and the download speed in Mbps (megabits/sec) and calculate the time in seconds that would be spent to download the file. (Note it's megabytes nad megabits).

7. Using the formula `area = (base x height) / 2`, write a program that accepts the base and height of a triangle as integers and prints the area as a real number. (Use of the multiplier 1.0 is not permitted.)

8. The `scanf` funtion returns the number of items read successfully. Why doesn't the code run properly when two integers are input?

   ```C
   int x, y, num;
   if ( num = scanf("%d, %d", &x, &y) != 2 )
   {
       printf("Error");
   }
   ```

9. Write a program to swap two variables without using a third variable.



___





## Control Structures - Decision Making



### Question 1

What will be the output of the following program if the user inputs `7 0`, `5 0` and `-13 8`?

```C
#include <stdio.h>
int main()
{
    int inta, intb;
    printf("Enter two non-zero integers: ");
    scanf("%d %d", &inta, &intb);

    if ( inta == 0 || intb == 0 )
    {
        printf("At least one integer is zero\n");
        return 1;
    }

    if ( inta < 0 )
    {
        inta = -inta;
    }
    if ( intb < 0 )
    {
        intb = -intb;
    }

    printf("Average of absolute value of the integers = %.2f\n", (float) (inta + intb) / 2);

    return 0;
}
```



___



### Question 2

What will be the output of the following program if the user inputs `2009`, `2012` and `1900`?

```C
#include <stdio.h>
int main()
{
    short year, years_left;

    printf("Enter year for leap year check: ");

    scanf("%hd", &year);

    if ( year < 0 )
    {
        printf("Invalid year\n");
        return 1;
    }

    if ( year % 4 == 0 )
    {
        printf("Year %hd is a leap year\n""Next leap year is after 4 years\n", year);
    }
    else
    {
        years_left = 4 - year % 4;
        printf("Year %hd is not a leap year\n""Next leap year is %hd\n", year, year + years_left);
    }

    return 0;
}
```



___



### Question 3

What will be the output of the following program if the user inputs `11000 45`, `1000 4` and `1000 -1`?

```C
#include <stdio.h>
int main()
{
    short hours_left, rate;
    float ticket_price, refund_amount;

    printf("Enter the price of ticket: ");
    scanf("%f", &ticket_price);

    printf("Number of hours before train departure: ");
    scanf("%hd", &hours_left);

    if ( ticket_price < 0 )
    {
        printf("Price can't be negative\n");
        return 1;
    }
    else if ( ticket_price > 10000 )
    {
        printf("Price can't exceed Rs. 10000\n");
        return 1;
    }
    else if( hours_left > 48 )
    {
        rate = 0;
    }
    else if( hours_left > 6 )
    {
        rate = 25;
    }
    else if ( hours_left > -2 )
    {
        rate = 50;
    }
    else
    {
        rate = 100;
    }

    refund_amount = ticket_price * ( 100 - rate ) / 100;
    printf("Refund amoutn = %.2f\n", refund_amount);

    return 0;
}
```



___



### Question 4

What will be the output of the following program if the user inputs `0`, `75344`, `7535`, `7534, 25000`, `7534, 15000`?

```C
#include <stdio.h>

#define USER_PIN 7534

int main()
{
    int atm_pin, amount;

    while(1)
    {
        printf("Enter PIN: ");
        scanf("%d", &atm_pin);

        if ( atm_pin == 0 )
        {
            printf("PIN can't be zero\n");
        }
        else if ( atm_pin > 9999 )
        {
            printf("PIN should not be more than 4 characters\n");
        }
        else if ( atm_pin < 1000 )
        {
            printf("PIN should not be less than 4 characters\n");
        }
        else if ( atm_pin != USER_PIN )
        {
            printf("INCORRECT PIN\n");
        }
        else
        {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if ( amount > 20000 )
            {
                printf("Can't withdraw more than Rs 20000\n");
            }
            else if ( amount == 0 )
            {
                return 1;
            }
            else
            {
                printf("Processing transaction, take cash\n");
                return 0;
            }
        }

    }

    return 0;
}
```



____



### Question 5

What will be the output of the following program if the user inputs `4 5 -9`?

```C
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ( a > 0 )
    {
        if ( b > 0 )
        {
            if ( c > 0 )
            {
                printf("Sum of three integers = %d\n", a + b + c);
            }
            else
            {
                printf("C is not a positive integer\n");
            }
        }
        else
        {
            printf("B is not a positive integer\n");
        }
    }
    else
    {
        printf("A is not a positive integer\n");
    }

    return 0;
}
```



___



### Question 6

What will be the output of the following program if the user inputs

* 5 0 9
* 3 5 4
* 5 2 6
* 6 10 8
* 0 0 0

```C
#include <stdio.h>

int main()
{
    short a, b, c;

    while (1)
    {
        printf("Enter three integers: ");
        scanf("%d %d %d", &a, &b, &c);

        if ( a == 0 && b == 0 && c == 0)
        {
            printf("All values are zero, quitting....\n");
            break;
        }

        if ( a > 0 && b > 0 && c > 0 )
        {
            if ( a * a + b * b != c * c )
            {
                if ( a * a + c *c != b * b )
                {
                    if ( b * b + c * c != a * a )
                    {
                        printf("Right Angled Traingle not possible\n");
                    }
                    else
                    {
                        printf("RAT with %hd as hypotenuse\n", a);
                    }
                }
                else
                {
                    printf("RAT with %hd as hypotenuse\n", b);
                }
            }
            else
            {
                printf("RAT with %hd as hypotenuse\n", c);
            }
        }
        else
        {
            printf("At least ont input is invalid\n");
        }

    }

    return 0;
}
```



___



### Question 7

What will be the output of the following program if the user inputs

* 2016
* 2013
* 1900
* 2000

```C
#include <stdio.h>
int main()
{
    short year, year_left;

    char is_leap_year = 'n';

    printf("Enter year for leap year check: ");

    scanf("%hd", &year);

    if ( year % 4 == 0 )
    {
        if ( year % 100 == 0 )
        {
            if ( year % 400 == 0 )
            {
                is_leap_year = 'y';
            }
            else
            {
                year_left = 4;
            }
        }
        else
        {
            is_leap_year = 'y';
        }
    }
    else
    {
        year_left = 4 - year % 4;
    }

    if ( is_leap_year == 'y' )
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year. Next leap year: %d\n", year, year + year_left);
    }

    return 0;
}
```



___

We can solve the leap year probelm using a logical expression. A year is a leap year if the following compund condition is true.

**is the year (divisible by 4 AND not divisible by 100) OR divisible by 400?**

Write the Leap Year Program using the above condition.

___



### Question 8

What will be the ouput of the following program if the user inputs

* 5 8 3
* 10.5 20.3 1
* 20 40 6

```C
#include <stdio.h>
int main()
{
    int operator;

    float left_operand, right_operand;

    while (1)
    {
        printf("Enter the left operand: ");
        scanf("%f", &left_operand);
        printf("Enter the right operand: ");
        scanf("%f", &right_operand);

        printf(" 1. '+'\n 2. '-'\n 3. '*'\n 4. '/'\n 5. '%%'\n");
        printf("Enter a valid number for operators: ");
        scanf("%d", &operator);

        switch ( operator )
        {
            case 1  :   printf("%f\n", left_operand + right_operand);
                        break;
            case 2  :   printf("%f\n", left_operand - right_operand);
                        break;
            case 3  :   printf("%f\n", left_operand * right_operand);
                        break;
            case 4  :   printf("%f\n", left_operand / right_operand);
                        break;
            case 5  :   printf("%f\n", (int) left_operand % (int) right_operand);
                        break;
            default :   printf("Illegal Operator\n");
        }

    }

    return 0;
}
```



___



### Question 9

What will be the output of the following program if the user inputs

* 4
* 9

```C
#include <stdio.h>
int main()
{
    short option, data_limit, tariff;

    while (1)
    {
        printf("\nChoose from the following 4G plans:\n");
        printf("\t1. 1 GB for Rs 100\n");
        printf("\t2. 2 GB for Rs 200\n");
        printf("\t3. 3 GB for Rs 300\n");
        printf("\t4. 4 GB for Rs 400\n");
        printf("\t9. Exit\n");
        printf("Enter your choice: ");
        scanf("%hd", &option);

        switch (option)
        {
            case 1  :   data_limit = 1;
                        tariff = 100;
                        break;
            case 2  :   data_limit = 2;
                        tariff = 200;
                        break;
            case 3  :   data_limit = 3;
                        tariff = 300;
                        break;
            case 4  :   data_limit = 4;
                        tariff = 400;
                        break;
            case 9  :   printf("Quitting....\n");
                        return 0;
            default :   printf("Invalid Operation\n");
        }

        if ( option >= 1 && option <= 4)
        {
            printf("You chose %hd GB for Rs. %hd\n", data_limit, tariff);
            printf("Cost per GB = Rs %.2f\n", (float) tariff / data_limit);
        }

    }

    return 0;
}
```





___



### Question 10 

What will be the output of the program if the user inputs

* 31/06/2016
* 30/13/2015
* 29/03/1900
* 29/02/2000

```C
#include <stdio.h>
int main()
{
    short day, month, year, max_days;

    while (1)
    {
        printf("Enter date in dd/mm/yyyy format: ");
        scanf("%hd/%hd/%hd", &day, &month, &year);

        switch (month)
        {
            case 2  :   max_days = ( year % 4 == 0 ) && 
                		( year % 100 != 0 || year % 400 == 0 ) ? 29 : 28;
                        break;
            case 4  :
            case 6  :
            case 9  :
            case 11 :   max_days = 30;
            default :   if ( month == 0 || month > 12 )
                        {
                            printf("Invalid month\n");
                            continue;
                        }
                        max_days = 31;
        }

        switch (day > max_days)
        {
            case 1  :   printf("Illegal number of days\n");
                        continue;
            case 0  :   printf("Valid Date\n");
        }
    }
    return 0;
}
```



____



### Question 11

What will be the output of the program if the user inputs

* 5000
* 12000

```C
#include <stdio.h>
int main()
{
    float ticket_price, rate = 50;
    printf("Enter price of ticket: ");
    scanf("%f", &ticket_price);

    if ( ticket_price <= 0 || ticket_price > 10000 )
    {
        goto exit_from_here;
    }
    else
    {
        rate = 100;
    }

    printf("Rate = %.2f\n", rate);
    return 0;

    exit_from_here:
        printf("Invalid Ticket Price\n");
        return 1;
}
```



___



### Question 12

Consider the following code:

```C
#include <stdio.h>
int main()
{
    int x = 5;
    if ( x++ == 10 )
        x = 0;
    else
        ++x;
    printf("%d\n", x);
    return 0;
}
```

What is the final value of x?



___



### Question 13

Consider the following code:

```C
#include <stdio.h>
int main()
{
    int x = 5;
    if ( x = 6 )
        x = 0;
    else
        x = 10;
    printf("%d", x);
    return 0;
}
```

What is the final value of x?



___



### Question 14

Consider the following code:

```C
#include <stdio.h>
int main()
{
    int x = 5;
    x = x == 5 ? 1 : 10;
    printf("%d", x);
    return 0;
}
```

The value of x is?



___



## Programming & Debugging Skills 4



1. Locate the errors in the following code segment:

   ```C
   if x > 5
       printf("Number must not exceed 5\n");
   	return 1;
   else
       printf("Number is valid\n");
   ```

2. What is wrong with the following code segment?

   ```C
   if ( x > 0 ) || ( y > 0 )
       printf("At least one number is positive\n");
   else if ( x <= 0 ) && ( y <= 0 )
       printf("Both numbers are zero or negative\n");
   ```

3. Write a program using `if` that accepts three integers from the keyboard and prints the maximum and minimum values found.

4. Write a program using `if` that accepts a user-input floating point number and prints 

   1. the largest integer that is smaller than the number
   2. the smallest integer that is greater than the number

5. The Olympic games have been held every four years since 1896 except for the years between 1940 and 1947. Write a program that accepts an integer and determines whether it represents an "Olympic Year".

6. A power utility charges the following rates:

   <u>Units</u>					<u>Rate/Unit</u>

   First 25 units				Rs. 4.89

   Next 35 Units			Rs 5.40

   Next 40 Units			Rs. 6.41

   Beyond 100 Units		Rs. 7.18

   Write a program that accepts the number of units consumed and prints the total charges payable.

7. Write a program that accepts a character from the keyboard and prints whether the character is alphabetic, numeric or neither. The program should also print whether the character is lowercase or uppercase. (*HINT*: Use the %c specifier of `scanf`.)

8. Write a program that accpets an integer from the user and prints "Odd" or "Even" without using the `if` and `switch` statements.

9. Consider the following rates charged by a mobile operator for data consumption in *integral* units of GB:

   <u>Data (GB)</u>				<u>Rate</u>

   1 GB					Rs 148

   2 GB					Rs 255

   3 GB					Rs 355

   4 to 6 GB				Rs 455

   7 GB onwards			Rs 700

   Write a program using `switch` that accepts an iteger from the keyboard and prints the corresponding rate after validation.

10. Detect the flaws in the following code segment:

    ```C
    float x = 5.5;
    switch (x)
    {
        case 5.5	:	printf("Number is 5.5\n");
        default		:	printf("Some other number\n");
    }
    ```

11. Write a program using `switch` that accepts an integer between 1 and 7 and prints whether the number represents a weekend (Saturday or Sunday) or not (Sunday = 1).

12. Write a program using `switch` that checks a user-input integer representing the month number and prints the number of days in that month. The program must combine multiple `case` options wherever possible.

13. Write a program using `switch` that checks a user-input character for a vowel or consonant and prints a suitable message. The program must first check whether the entered character is alphabetic (lower or upper).



___



## Control Structures - Loops



### Question 1

What will be the output of the following program?

```C
#include <stdio.h>

#define NO_OF_INTEGERS 10

int main()
{
    short i = 1;
    short sum = 0;

    printf("Progressive sum shown below:\n");

    while ( i <= NO_OF_INTEGERS )
    {
        sum += i;
        i++;
        printf("%hd ", sum);
    }

    printf("\nSum of first %d integers = %hd", NO_OF_INTEGERS, sum);

    return 0;
}
```



___



### Question 2

What will be the output of the followinf program if the user inputs

* 4
* 6
* 1

```C
#include <stdio.h>
int main()
{
    short num1, num2;
    unsigned int factorial = 1;
    printf("Factorial of which number? ");
    scanf("%hd", &num1);

    num2 = num1;

    while ( num1 >= 1 )
    {
        factorial *= num1;
        num1--;
    }

    printf("Factorial of %hd = %d\n", num2, factorial);
    return 0;
}
```





___



### Question 3

What will be the output of the following program if the user inputs

* 13569

```C
#include <stdio.h>
int main()
{
    unsigned int number;

    short last_digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while ( number != 0 )
    {
        last_digit = number % 10;
        number= number / 10;
        sum += last_digit;
        printf("%hd ", last_digit);
    }

    printf("\nSum of digits: %hd", sum);

    return 0;
}
```





___



### Question 4

What will be the output of the following program if user inputs 

* 15

```C
#include <stdio.h>

int main()
{
    short num;
    unsigned long prev1 = 0, prev2 = 0, sum = 1, sum_terms = 0;
    short i = 0;

    printf("Enter the last term of series: ");
    scanf("%hd", &num);

    while ( i++ < num )
    {
        printf("%ld ", sum);
        sum_terms += sum;
        prev1 = prev2;
        prev2 = sum;
        sum = prev1 + prev2;
    }

    printf("\nSum of first %hd terms = %ld\n", num, sum_terms);

    return 0;
}
```





___



**Compile the following program on your computer and observe the output**

```C
#include <stdio.h>
int main()
{
    int c;
    c = getchar();
    while ( c != EOF )
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}
```



___



### Question 5

What will be the output of the following code?

```C
#define ROWS 5

#define COLUMNS 12

#include <stdio.h>

int main()
{
    int x = 0, y;
    while ( x++ < ROWS )
    {
        y = 0;
        while ( y++ <COLUMNS )
        {
            printf(" %3d", x * y);
        }
        printf("\n");
    }
    return 0;
}
```



___



### Question 6

What will be the output of the following code if the user inputs

* 5

```C
#include <stdio.h>
int main()
{
    short row = 1, col, rows_max;

    printf("Number of rows? ");
    scanf("%hd", &rows_max);

    while ( row <= rows_max )
    {
        col = 1;
        while ( col++ <= row )
        {
            printf("%d ", row);
        }
        row++;
        printf("\n");
    }

    return 0;
}
```



___



### Question 7

What will be the ouput of the following code if the user inputs

* 2 0
* 2 10
* 0 0

```C
#include <stdio.h>
int main()
{
    short num, base = 1, power = 1;
    unsigned long total;

    while ( base > 0 && power >= 0 )
    {
        printf("Enter base and power (0 0 to exit): ");
        scanf("%hd%hd", &base, &power);

        if ( base <= 0 || power < 0 )
        {
            printf("Invalid Input. Quitting...\n");
            return 1;
        }

        num = 0;
        total = 1;
        while ( ++num <= power )
        {
            total *= base;
        }
        printf("%d to the power %d = %lu\n", base, power, total);
    }
    return 0;
}
```



___



### Question 8

What will be the output of the program if the user inputs

* 3 4 -5
* 3 4 5
* 0 0 0

```C
#include <stdio.h>

int main()
{
    short a, b, c;

    while (1)
    {
        printf("Enter three integers a b c: ");
        scanf("%hd %hd %hd", &a, &b, &c);

        if ( a == 0 && b == 0 && c == 0 )
        {
            printf("All values are zero. Quitting....\n");
            return 1;
        }

        else if ( a < 0 || b < 0 || c < 0 )
        {
            printf("Negative numbers not allowed\n");
            continue;
        }
        else
        {
            break;
        }
    }
    printf("Sum of %d %d %d: %d\n", a, b, c, a + b + c);

    return 0;
}
```



___





