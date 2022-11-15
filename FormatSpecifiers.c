#include <stdio.h>

int main (void)

{
    int integerVar = 100;
    float floatingVar = 33.212;
    double doubleVar = 8.473e+11;
    char charVar = 'W';
    float x = 3.9995125485745;

    _Bool boolVar = 0;

    printf ("integerVar = %i\n", integerVar);
    printf ("floatingVar = %f\n", floatingVar);
    printf ("doubleVar = %e\n", doubleVar); /*e and g =boolean double */
    printf ("doubleVar = %g\n", doubleVar);
    printf ("charVar = %c\n", charVar);

    printf ("boolVar = %i\n", boolVar);
    printf ("boolVar = %u\n", boolVar);

    /* Printing on the same line as below*/
    printf ("The Integer Var = %i The Floating Var = %f\n", integerVar, floatingVar);

/* Width Specifier*/

    printf ("Floating Point to 2 precision = %.2f\n", x);
    printf ("Floating Point to 5 precision = %.5f\n", x);




}
