/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/////////Luis Pedro Gonzalez
#include <stdio.h>

#define N 10 // Definimos el tamaño del array

int main() {
    int array[N]; // array de tamaño N
    int *p = array; // Creamos un puntero que apunte al primer elemento del array

    // Llenamos el array con valores ingresados por el usuario
    for (int i = 0; i < N; i++) {
        printf("Ingrese un valor entero para la posición %d: ", i);
        scanf("%d", &array[i]);
    }

    // Recorremos el array utilizando el puntero y mostramos cada elemento multiplicado por 2
    printf("Los elementos del array multiplicados por 2 son:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", (*p) * 2);
        p++; // Incrementamos el puntero para apuntar al siguiente elemento
    }

    return 0;
}

