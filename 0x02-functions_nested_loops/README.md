# 0x02.functions nested loops

## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

## Tasks
[0. _putchar](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c)

Write a program that prints _putchar, followed by a new line.
* The program should return 0

[1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c)

Write a function that prints the alphabet, in lowercase, followed by a new line.
* Prototype: void print_alphabet(void);
* You can only use _putchar twice in your code

[2. 10 x alphabet](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Prototype: void print_alphabet_x10(void);
* You can only use _putchar twice in your code

[3. islower](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c)

Write a function that checks for lowercase character.
* Prototype: int _islower(int c);
* Returns 1 if c is lowercase
* Returns 0 otherwise

FYI: The standard library provides a similar function: islower. Run man islower to learn more.

[4. isalpha](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c)

Write a function that checks for alphabetic character.
* Prototype: int _isalpha(int c);
* Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise

FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

[5. Sign](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c)

Write a function that prints the sign of a number.
* Prototype: int print_sign(int n);
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero

[6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c)

[7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c)

[8. I'm federal agent Jack Bauer, and today is the longest day of my life](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c)

[9. Learn your times table](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c)

[10. a + b](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c)

[11. 98 Battery Street, the OG](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c)

[12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c)

[13. Nature made the natural numbers; All else is the work of women](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c)

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
* You are allowed to use the standard library

[14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c)

Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
* The numbers must be separated by comma, followed by a space , 
* You are allowed to use the standard library

[15. Even Liber Abbaci](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/103-fibonacci.c)

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
* You are allowed to use the standard library

[16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+](https://github.com/Mfuseini10/alx-low_level_programming/blob/master/0x02-functions_nested_loops/104-fibonacci.c)

Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
* The numbers should be separated by comma, followed by a space ,
* You are allowed to use the standard library
* You are not allowed to use any other library (You can’t use GMP etc…)
* You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
*You are not allowed to hard code any Fibonacci number (except for 1 and 2)
