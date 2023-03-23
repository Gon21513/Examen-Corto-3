
#include <math.h> // Necesario para la constante M_PI
const float PI = M_PI; // Declaración de la constante PI

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("No se puede dividir entre 0\n");
        return 0;
    } else {
        return a / b;
    }
}
