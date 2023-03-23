/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/////////Luis Pedro Gonzalez
#include <stdio.h>

int main()
{
    // la serie de fibonacci simore comienza con 0 y 1
    int i, n, t1 = 0, t2 = 1, nextTerm;

// se guarda el limite en la variable n
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci de %d terminos:\n", n);
//for se ejecut n veces que fue el linite que el usaurio establece
    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2; // se debe sumer el termino anterior con el sigguiente
        t1 = t2; //ahora t1 va a ser el termino anterior que ahora es t2
        t2 = nextTerm; //t2 es eltermino actual o sea nextterm
    }

    return 0;
}
