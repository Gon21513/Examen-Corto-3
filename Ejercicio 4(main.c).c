/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/////////Luis Pedro Gonzalez
#include <stdio.h>
#include "operaciones.h"

int main() {
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    printf("El valor de PI es %.5f\n", PI);//im[rimimos el valor de i con 5 decimales]
    printf("%d + %d = %d\n", a, b, sum(a, b));// sumamos a y b que ingreso
    printf("%d - %d = %d\n", a, b, subtract(a, b));//restamp
    printf("%d * %d = %d\n", a, b, multiply(a, b));// mostr multiplicacion
    printf("%d / %d = %.2f\n", a, b, divide(a, b));

    return 0;
}

