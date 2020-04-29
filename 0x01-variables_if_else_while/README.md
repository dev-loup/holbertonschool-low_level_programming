# Variables, if, else, while project

In this module you will learn what are arithmetic operators and logical operators

Loop and conditional statements are introduced and main use of TRUE and FALSE validations

## topics

* Arithmetic operators
* Logical Operators
* Relational Operators
* True and False values
* Boolean operators
* If and If..else
* comments in C
* Variable declarations of type char, int, unsigned int
* Assign values to variables
* printf() function
* ASCII character set
* gcc -m32 and -m64 flags

## Recomendations

* Projects were checked with `gcc 4.8.4` using `-Werror -Wall -Wextra -pedantic` even if it´s not necessary using the flags test your code is correctly written and there are no potencial mistakes
* `Betty code style` is the standard code style, you can get [the betty checker here](https://github.com/holbertonschool/Betty/wiki) and documentation about using it in different text editors
* All your files must end with a new line
* while working in your own repo remember to write a `README.md`, more information about [writting README's is here](https://www.makeareadme.com/)
* Using `global variables` is not allowed

## Installation

### Betty Code Style program
To run the Betty linter just with command betty <filename>:

*Go to the Betty repository
* Clone the repo to your local machine
* cd into the Betty directory
* Install Betty with sudo ./install.sh
* All is done, from your terminal you can use betty <file> for checking your code

## Tasks
### 0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

* You can find the source code here:
```c
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
```
* The variable n will store a different value every time you will run this program
* You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
* The output of the program should be:
* __The number, followed by
* ____if the number is greater than 0: is positive
* ____if the number is 0: is zero
* ____if the number is less than 0: is negative
* __followed by a new line
### 1. The last digit 

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

* You can find the source code here
```c
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
```
* The variable `n` will store a different value every time you run this program
* You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
* The output of the program should be:
* __The string Last digit of, followed by
* __`n`, followed by
* __the string `is`, followed by
* ____if the last digit of `n` is greater than 5: the string `and is greater than 5`
* ____if the last digit of `n` is 0: the string `and is 0`
* ____if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
* __followed by a new line
### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

### 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

### 4. When I was having that alphabet soup, I never thought that it would pay off

Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except `q` and `e`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

### 5. Numbers

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

* All your code should be in the `main` function

### 6. Numberz

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* You are not allowed to use any variable of type `char`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` twice in your code
* All your code should be in the `main` function

### 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

### 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

### 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by `,`, followed by a space
Numbers should be printed in ascending order
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` four times maximum in your code
* You are not allowed to use any variable of type `char`

### 10. 00...99

Write a program that prints the numbers from `00` to `99`.

* Numbers must be separated by `,`, followed by a space
* Numbers should be printed in ascending order, with two digits
* You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)
* You can only use `putchar` five times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

### 100. Inventing is a combination of brains and materials. The more brains you use, the less material you need (Advanced task)

Write a program that prints all possible different combinations of two digits.

* Numbers must be separated by `,`, followed by a space
* The two digits must be different
* `01` and `10` are considered the same combination of the two digits `0`and `1`
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` five times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

### 101. The success combination in business is: Do what you do better... and: do more of what you do... (Advanced task)

Write a program that prints all possible different combinations of three digits.

* Numbers must be separated by ,, followed by a space
* The three digits must be different
* `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` six times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

### 102. Software is eating the World (Advanced task)
Write a program that prints all possible combinations of two two-digit numbers.

* The numbers should range from `0` to `99`
* The two numbers should be separated by a space
* All numbers should be printed with two digits. `1` should be printed as `01`
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* `00 01` and `01 00` are considered as the same combination of the numbers 0 and 1
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` eight times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

## License
All exercises were designed by [holberton School](https://holbertonschool.com/)
