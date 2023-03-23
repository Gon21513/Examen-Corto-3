/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/////////Luis Pedro Gonzalez
#include <stdio.h>

int main()
{
    float fahrenheit, celsius;// con decimales 

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

//formula para converiosn a celsius
    celsius = (fahrenheit - 32) * 5/9;

    printf("%.2f grados Fahrenheit son %.2f grados Celsius\n", fahrenheit, celsius);

    return 0;
}
