# Printf
In the C programming language, the printf function is used to print output to the standard output stream (usually the console). It is defined in the stdio.h header file and has the following general form:
```
int printf(const char *format, ...);
```
The **format** parameter is a string that specifies the format of the output. It can contain special placeholders, called conversion specifiers, that are replaced with the corresponding arguments passed to printf. For example, the conversion specifier %d is used to print an integer, and %f is used to print a floating-point number.

Here's an example of how printf can be used:
```
#include <stdio.h>

int main(void)
{
    int x = 10;
    float y = 3.14;
    printf("x = %d, y = %f\n", x, y);
    return 0;
}
```
This code will print the following output to the console:
```
x = 10, y = 3.140000
```
There are many other conversion specifiers available in printf, such as %c for printing a character, %s for printing a string, and %x for printing an integer in hexadecimal form. You can find a full list of conversion specifiers in the documentation for printf.

## Variadic Functions
So! the only thing you have to learn to complete this projet is **Variadic Functions**.

a variadic function is a function that takes a variable number of arguments. These types of functions are declared with an ellipsis (three dots, ...) in the parameter list, like this:
```
int foo(int x, ...);
```
The ellipsis indicates that the function can take any number of additional arguments of any type. For example, the printf function, which was mentioned in the previous answer, is a variadic function that can take any number of arguments of any type, depending on the format string specified as the first argument.

To access the variadic arguments in a function, you can use the **va_list**, **va_start**, **va_arg**, and **va_end** macros, which are defined in the **<stdarg.h>** header file. These macros allow you to **iterate through the variadic arguments in a function and process them as needed**.

Here's an example of how you might use these macros in a simple **variadic function**:

```
#include <stdio.h>
#include <stdarg.h>

void print_all(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    while (*format) {
        if (*format == 'd') {
            int i = va_arg(args, int);
            printf("%d ", i);
        } else if (*format == 'c') {
            int c = va_arg(args, int);
            printf("%c ", c);
        }
        ++format;
    }
    va_end(args);
    printf("\n");
}

int main(void)
{
    print_all("dcddc", 'a', 1, 2, 3, 'b');
    return 0;
}

```
This code defines a function print_all that takes a format string and a variable number of arguments. The format string is a string containing the letters d and c, which indicate that the corresponding arguments should be treated as integers or characters, respectively. The function uses the va_list, va_start, va_arg, and va_end macros to iterate through the variadic arguments and print them out according to the format string.

