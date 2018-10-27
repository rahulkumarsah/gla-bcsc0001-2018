# Super Practice Set 1 (for Mid Sem II)



![](https://images.pexels.com/photos/442574/pexels-photo-442574.jpeg?auto=compress&cs=tinysrgb&h=650&w=940)



## General Instructions

1. Read the question given below carefully.

2. If you do not understand something from the practice set, you are free to compile the source code on your compiler, search it on Google or email me.

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

5. If you are not able to understand any particular statement in any of the code, try to remove the statement and then observe the output of the program, when you understand the difference between the outputs, try to modify the behaviour of the statement.

6. Don't panic if you see some code statements that we have not covered in the class. It only means that it is written here only for your knowledge, the mid sem II exam would only have topics from the prescribed syllabus. 

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



## Programming and Debugging skills 1

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

* Write a program that uses a `while` loop to print the integers from 1 to 10. If you replace the `<` operator with `<=`, what else do you need to do to obtain the same output?

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
#include <stdio.h>
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

4. Since 'A' is actually an integer, will `printf("%c", 'A');` display the same output as `printf("%d", 'A');`? Explain with reasons.



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

   4. If both loops performed an additional iteration, what would be the next item to be printed?

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
    printf("Refund amount = %.2f\n", refund_amount);

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



### Question 9

What will be the output of the following program if the user inputs

* 19 49 -5 137 1234567 0

```C
#include <stdio.h>
int main(void)
{
    int num, divisor;
    char is_prime;

    printf("Enter numbers from prime test (0 to quit): ");
    while (scanf("%d", &num) == 1)
    {
        if (num == 0)
        {
            break;
        }
        else if (num < 0)
        {
            printf("Invalid input\n");
            continue;
        }

        divisor = 2;
        is_prime = 'y';

        while (divisor < num)
        {
            if (num % divisor == 0)
            {
                is_prime = 'n';
                break;
            }
            divisor++;
        }
        is_prime == 'y' ? printf("%d is prime\n", num) : printf("%d is not prime, it is divisble by %d\n", num, divisor) ;
    }
    printf("Quitting....\n");
    return 0;
}
```



___



### Question 10

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while(i <= 10);
    printf("Sum of the first 10 integers is %d\n", sum);
    return 0;
}
```



___



### Question 11

What will be the output of the following program if the user inputs 

* 35
* 128

```C
#include <stdio.h>
int main()
{
    long quot;
    short count = 0, rem = 0;

    printf("Enter a decimal integer: ");
    scanf("%ld", &quot);

    do
    {
        rem = quot % 2;
        quot /= 2;
        printf("%hd", rem);
        count++;
    } while(quot > 0);
    printf("\nReverse of the above numbers is the binary number\n"
    "No. of iterations = %hd\n", count);
    return 0;
}
```



___



## Try these code segments

```C
do
{
    sum += i;
} while(i++ < 100);
```



```C
int chr;
for ( chr = 65 ; chr < 91 ; chr++ )
    printf("%c = %d", chr, chr);
```



```C
int chr;
while( chr < 91 )
{
    printf("%c = %d", chr, chr);
    chr++;
}
```



```C
int chr = 65;
for ( ; chr < 91 ; )
{
    printf("%d = %c", chr, chr);
    chr++;
}
```



___



### Question 12

What will be the output of the following program? What does this program do?

```C
#include <stdio.h>
int main()
{
    short chr, count = 0;
    short diff = 'a' - 'A';

    for ( chr = 'A' ; chr <= 'Z' ; chr++ )
    {
        printf("%c = %3hd ", chr + diff, chr + diff);
        if ( ++ count == 9 )
        {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}
```



___



### Question 13

What will be the output of the following program?

```C
// Program to print the result of the series:
// 1 - 4 + 9 - 16 + 25 ...
#include <stdio.h>
int main()
{
    short n, n_max, sum = 0;

    printf("Enter max number of terms: ");
    scanf("%hd", &n_max);

    for ( n = 1 ; n <= n_max ; n++ )
    {
        if ( n % 2 == 0 )
        {
            sum += n * n;
        }
        else
        {
            sum -= n * n;
        }
        printf("%hd ", n * n);
    }
    printf("\nSum = %hd\n", sum);
    return 0;
}
```



___



## Try these code segments

```C
short chr, diff, count;
for ( diff = 'a' - 'A', count = 0, chr = 'A' ; chr <= 'Z' ; chr++ )
{
	printf("%c = %d\n", chr + diff, chr + diff);
}
```



```C
short i, sum;
for ( i = 1, sum = 0 ; i <= 10 ; i++ )
{
    sum += i;
    printf("%hd ", sum);
}
printf("\nSum of first 10 integers = %hd\n", sum);
```



```C
for ( i = 0, sum = 0 ; i < 10 ; ++i, sum += i )
    printf("%d", sum);
```



```C
short i = 0, sum = 0;
    for ( i = 0, sum = 0 ; i < 10 ; ++i, sum += i, printf("%hd ", sum))
    ;
// try to run the program without the last semicolon and observe the output
```



___



### Question 14

What will be the output of the following program if the user input

* Baahubali
* devsena
* bhallal deva

```C
#include <stdio.h>
int main()
{
    char c, diff;
    for ( diff = 'a' - 'A' ; scanf("%c", &c) == 1 ; )
    {
        if ( c >= 'a' && c <= 'z' )
        {
            printf("%c", c - diff);
        }
        else
        {
            printf("%c");
        }
    }
    return 0;
}
```



___



### Question 15

What will be the output of the following program if the user inputs

* 8
* 35
* 128

```C
#include <stdio.h>
int main()
{
    unsigned long quot;
    char binary_digits[80];
    short rem, index;

    printf("Enter a decimal integer: ");
    scanf("%lu", &quot);

    for ( index = 0  ; quot > 0 ; index++, quot/= 2 )
    {
        rem = quot % 2;
        binary_digits[index] = rem == 1 ? '1' : '0' ;
    }

    for ( index-- ; index >= 0 ; index-- )
    {
        printf("%c ", binary_digits[index]);
    }

    return 0;
}
```



___



### Question 16

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int x, y;
    for ( x = 1 ; x <= 5 ; x++ )
    {
        for ( y = 1 ; y <= 12 ; y++ )
        {
            printf(" %3d", x * y);
        }
        printf("\n");
    }
    return 0;
}
```



___



### Question 17

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int i, j, k, rows;

    rows = 5;

    for ( i = 1 ; i <= rows ; i++ )
    {
        for ( j = 1 ; j <= rows - i ; j++ )
        {
            printf(" ");
        }
        for ( k = 0 ; k != 2 * i - 1 ; k++ )
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```



___



## Try the following code segments

```C
for ( div = 3 ; div < num ; div += 2)
{
    if ( num % div == 0 )
    {
        is_prime = 'n';
        break;
    }
}
```



```C
for ( ; ; )
{
    number = 42;
    if ( number < 0 )
    {
        printf("Invalid Input\n");
        continue;
    }
}
```



___



### Question 18

What will be the output of the following program if the user inputs

* 100

```C
#include <stdio.h>
int main()
{
    int num, max_num, div;
    char is_prime;

    printf("Maximum number to be tested for prime: ");
    scanf("%d", &max_num);

    for ( num = 3 ; num <= max_num ; num+= 2 )
    {
        is_prime = 'y';
        for ( div = 3 ; div < num ; div += 2 )
        {
            if ( num % div == 0 )
            {
                is_prime = 'n';
                break;
            }
        }
        if (is_prime == 'y')
        {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
```



___



## Try the following code segments

```C
int x;
for ( ; scanf("%d", &x) == 1 ; )
	;
```



```C
while ( printf("Hello") )
    ;
```



```C
for ( ; 1 ; )
    ;
```



```C
for ( -5 ; 1 ; -5 )
    ;
```



```C
for ( printf("") ; printf("") ; printf("") )
    ;
```



___



## Programming & Debugging Skills 5

1. Write a program using `while` that accepts real numbers from the keyboard, truncates the decimal portion, if any, and prints the sum of their squares. The loop must terminate when the sum has exceeded 100000.

2. Write a program that uses a `while` loop to print the following 4-line pattern

   ```
      a
     b b
    c c c
   d d d d
   ```

3. Correct the following code snippet

   ```c
   short i = 0;
   do
   	printf("hello\n");
   	i++;
   while i < 9
   ```

4. Develop a program using `while` (outer loop) and `for` (inner loop) to print all prime numbers between two integers that are input by the user. The program must repeatedly prompt for the pair of integers until the user inputs at least one zero.

5. Write a program that calculates the maximum and minimum values of a set of positive integers. The program should prompt for each integer and print the two values after the user enters 0 or after 20 integers have been input.

6. Write a program using a `for` loop that determines the number of students from user input before accepting the total marks for each student. Using the guide

   1. A: 90 - 100
   2. B: 80 - 89
   3. C: 60 - 79
   4. D: 0 - 59

   Print a statement that shows the number of students places in each of these categories.

7. Write a program using `while` that converts a binary integer to decimal without using an array.

8. Design the skeleton of a program that uses a nested loop. For a certain condition (say, x = 0) control must break out of both loops using `break` twice. Is the `goto` statement a better alternative here?



___



## Arrays

**Also explain what do all of the following questions do?**

### Question 1

What will be the output of the following program?

```C
#include <stdio.h>
#define SIZE 7
int main()
{
    int i;
    int int_arr[SIZE] = {100, 200};

    printf("Size of int_arr : %d\n", sizeof int_arr);

    printf("Integer array contains\t");
    for ( i = 0 ; i < SIZE ; i++ )
        printf("%5d", int_arr[i]);

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
    int i, j, num, new_value, arr[20];

    printf("Number of integers to input? ");
    scanf("%d", &num);

    printf("Enter %d numbers: ", num);
    for ( i = 0 ; i < num ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < num ; i++ )
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter index: ");
    scanf("%d", &j);

    printf("Enter value: ");
    scanf("%d", &new_value);

    for ( i = num ; i > j ; i-- )
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = new_value;

    for ( i = 0 ; i <= num ; i++ )
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```



___



### Question 3

```C
#include <stdio.h>
int main()
{
    int i = 0, j, arr[20];

    for ( i = 0 ; i < 20 ; i++ )
    {
        arr[i] = (i + 1);
    }

    for ( i = 0 ; i < 20 ; i++ )
    {
        printf("%3d ", arr[i]);
    }

    printf("\nEnter the index to delete: ");
    scanf("%d", &j);

    for ( i = j ; i < 20 - 1 ; i++ )
    {
        arr[i] = arr[i+1];
    }

    for ( i = 0 ; i < 20 - 1 ; i++ )
    {
        printf("%3d ", arr[i]);
    }

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
    int i, size = 8, arr1[8];

    int arr2[8] = {0, 1, 2, 3, 4, 5, 6, 7};

    for ( i = 0 ; i < size ; i++ )
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    for ( i = 0 ; i < size ; i++ )
    {
        arr1[size - 1 - i] = arr2[i];
    }

    for ( i = 0 ; i < size ; i++ )
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
```



___



### Question 5

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int i, j, temp, size= 8;
    int arr[8] = {0, 1, 2, 3, 4, 5, 6, 7};

    for ( i = 0 ; i < size ; i++ )
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for ( i = 0, j = size - 1 ; i < (size / 2) ; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for ( i = 0 ; i < size ; i++ )
    {
        printf("%d ", arr[i]);
    }

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
    unsigned int number;
    short i = 0, arr[10];

    printf("Enter a number: ");
    scanf("%d", &number);

    while ( number != 0 )
    {
        arr[i++] = number % 10;
        number /= 10;
    }
    i--;

    while ( i >= 0 )
    {
        printf("%hd ", arr[i--]);
    }
    printf("\n");

    return 0;
}
```



___



### Question 7

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    char arr1[80];
    char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'A', 'B', 'C', 'D', 'E', 'F'};

    int i, j, imax, temp, base, remainder;

    long quotient, number;

    printf("Enter the number to convert: ");
    scanf("%ld", &quotient);

    number = quotient;

    printf("Enter the base to convert to: ");
    scanf("%d", &base);

    for ( i = 0 ; quotient > 0 ; i++ )
    {
        remainder = quotient % base;
        quotient /= base;
        arr1[i] = digits[remainder];
    }


    imax = i;

    for ( i = 0, j = imax - 1; i < imax / 2 ; i++, j-- )
    {
        temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
    }



    printf("%d = (", number);
    for ( i = 0 ; i < imax ; i++ )
    {
        printf("%c ", arr1[i]);
    }
    printf("\b)%d", base);

    return 0;
}
```



___



### Question 8

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int i = 0, imax, num, arr[128];
    char is_found;

    printf("Enter some integers (Q to quit): ");
    while ( scanf("%d", &arr[i++]) == 1 )
    ;

    while ( getchar() != '\n' )
    ;

    imax = i - 1;

    for ( ; printf("Integer to search (Q to quit): ") ; )
    {
        if ( scanf("%d", &num) == 0 )
            break;
        is_found = 'n';
        for ( i = 0 ; i < imax ; i++ )
        {
            if ( num == arr[i] )
            {
                is_found = 'y';
                break;
            }
        }
        is_found == 'n' ? printf("%d not found\n", num) : printf("%d stored in arr[%d]\n", num, i) ;
    }
    return 0;
}
```



___



### Question 9

What will be the output of the following program?

```C
#include <stdio.h>
#define SIZE 128
int main()
{
    int c, i;
    int arr[SIZE] = {0};

    printf("Enter a line of text and press [Enter]\n");
    while ( (c = getchar()) != '\n' )
    {
        arr[c]++;
    }

    for ( i = 0 ; i < SIZE ; i++ )
    {
        if ( arr[i] > 0 )
        {
            printf("%c : %d\n", i, arr[i]);
        }
    }

    return 0;
}
```



___



### Question 10

What will be the output of the following program?

```C
#include <stdio.h>
int main()
{
    int i, n, size;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);

    int arr[n];
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Size of this array is set at runtime to %d\n", size);

    printf("Enter %d integers: \n", n);

    for ( i = 0 ; i < size ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < size ; i++ )
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```



___



## Programming and Debugging Skills 6

1. Correct the following code segment to compile and execute properly.

   ```C
   int i;
   int arr[] = {1, 2, 4, 4};
   for ( i = 1 ; i <= sizeof arr / sizeof int ; i++ )
       printf("%d\n", arr[i]);
   ```

2. Write a program that prints the maximum and minimum values stores in an integer array containing 10 elements. The array is populated with user input.

3. Write a program that declares and initializes a 10-element array with arbitrary values. The program should accept an integer from the keyboard, delete all the matching array elements and print the modified array in reverse.

4. Use `switch` and `do-while` loop to set the elements of the array, month[13], to the maximum number of days of each month. Print the array in the format `month[n] = value`. (Ignore month[0]) .

5. Write a program to input a set of integers and store the values in an array after discarding duplicates. Print the array and a count of the number of duplicates found.

6. Write a program using a 26-element integer array to print the number of occurrences of each lowercase letter fetched from the keyboard using `getchar`. Also print the number of discarded characters in the input.

___



## Functions

### Question 1

What will be the output of the following program?

```C
#include <stdio.h>

void message(void);

int main()
{
    printf("calling the function....\n");
    message();
    printf("returned from the function....\n");
    return 0;
}

void message(void)
{
    printf("This function uses no arguments and returns nothing.\n");
}
```



___



### Question 2

Write the program for the following code segment

```C
double area(float length, float breadth)
{
    double product;
    product = length * breadth;
    return product;
}
```



___



### Question 3

Write a program to calculate the area of a rectangle

The function calling statement is written below

```C
result = area(10.0, 20.0);
```



___



### Question 4

What will be the output of the following program if the user input

* 40.5
* 0
* -40

```C
#include <stdio.h>

float c2f(float c);

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = c2f(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, c2f(celsius));
    return 0;
}

float c2f(float c)
{
    float f;
    f = c * 9 / 5 + 32;
    return f;
}
```



___



### Question 5

What will be the output of the following program if the user input

* 13
* 377

```C
#include <stdio.h>

int is_not_prime(int num);

int main()
{
    int number, divisor;

    printf("Enter a number to check: ");
    scanf("%d", &number);

    divisor = is_not_prime(number);

    if ( divisor > 0 )
    {
        printf("%d is not prime, divisible by %d\n", number, divisor);
    }
    else
    {
        printf("%d is a prime number\n", number);
    }

    return 0;
}

int is_not_prime(int n)
{
    int d = 2;
    while ( d < n )
    {
        if ( n % d == 0)
        {
            return d;
        }
        d++;
    }
    return 0;
}
```



---



### Question 6

What will be the output of the following program?

```C
#include <stdio.h>

#define SIZE 6

void input_array(int arr[], int num);

int main()
{
    int arr1[SIZE], i;
    input_array(arr1, SIZE);
    for ( i = 0 ; i < SIZE ; i++ )
    {
        printf("arr[%d] = %d\n", i, arr1[i]);
    }
    printf("\n");
    return 0;
}

void input_array(int arr[], int num)
{
    int i;
    printf("Enter 6 integers: ", num);
    for ( i = 0 ; i < num ; i++ )
    {
        scanf("%d", &arr[i]);
    }
    return;
}
```



___



## Calculating the sum of a Power Series

### 1<sup>1</sup> + 2<sup>2</sup> + 3<sup>3</sup> + 4<sup>4</sup> + ... + n<sup>n</sup>

```C
#include <stdio.h>

long power(int base, int exponent);

unsigned long compute_sum(int terms);

int main()
{
    int terms;
    printf("Enter number of terms to sum: ");
    scanf("%d", &terms);
    printf("\nSum of %d terms = %ld", terms, compute_sum(terms));
    return 0;
}

long power(int base, int exponent)
{
    int i =0;
    long result = 1;
    while ( ++i <= exponent )
    {
        result *= base;
    }
    return result;
}

unsigned long compute_sum(int terms)
{
    int i = 1, base = 1;
    unsigned long sum = 0;
    while ( i++ <= terms )
    {
        sum += power(base, base);
        printf("%ld ", sum);
        base++;
    }
    return sum;
}
```



___



### Question 7

What will be the output of the following program?

```C
#include <stdio.h>

void bubble_sort(int arr[], int size);

int main()
{
    int arr[] = {111, 77, 30, 5, 7, 60, 222, 55, 80, 15, 40, 1};
    int s = sizeof(arr) / sizeof(arr[0]);
    printf("Array contents before sorting: \n");
    int i = 0;
    for ( i = 0 ; i < s ; i++ )
    {
        printf("%3d ", arr[i]);
    }
    bubble_sort(arr, s);
    printf("\nArray contents after sorting: \n");
    for ( i = 0 ; i < s ; i++ )
    {
        printf("%3d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int arr[], int size)
{
    int i, j, temp;
    for ( i = 0 ; i < size - 1 ; i++ )
    {
        for ( j = 0 ; j < size - i - 1 ; j++ )
        {
            if ( arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}
```



___



## Concept Based Questions

1. Try out the following code sinppet

   ```C
   int main()
   {
       int arr[40];
       printf("Size of array = %d", sizeof(arr));
       fun(arr);
       return 0;
   }
   void fun(int arr[])
   {
       printf("Size of array = %d\n", sizezof(arr));
       return;
   }
   ```

___



## Programming & Debugging Skills 7

1. Identify the errors in the following program

   ```C
   #include <stdio.h>
   void fun(void)
   int main()
   {
       fun (void);
       return 0;
   }
   void fun(void)
   {
       printf("Baahubali\n");
       return;
   }
   ```

2. Write a program containing a function named `volume` which returns the volume of a sphere. The function is passed the radius as a single argument.

3. Modify the preceding program so that the `volume` function handles a cube and a a sphere. Incorporate `#define` statements that would enable the function to be invoked in the following two ways

   * float radius, length, vol;
     * vol = volume(radius, SPHERE);
     * vol = volume(length, cube);

4. Write a program that uses a function named take_input to let a user input an unspecified number of integers ( not exceeding 100 ). The values should be stored in an array defined in `main` and the function is passed the name of this array as an argument.

5. Create a a function named `print_array` that prints the contents of an array. The function must take an additional argument that determines whether the array is printed in forward or reverse sequence.

6. Write a program that uses a function named `copy_array` to copy an initialized array.

7. Write a program that uses a function named `day_diff` to compute the number of days between two days of the same year, (both days inclusive). The days are input in the format **DD:MM** and don't relate to a leap year.

8. Devise a function named `time_to_download` that accepts the Internet Speed in Mbps and file size in MB as two arguments. The function should return the download time in hours as a floating point number. (Speed uses )


