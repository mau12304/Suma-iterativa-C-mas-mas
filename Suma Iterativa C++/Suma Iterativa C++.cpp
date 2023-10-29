#include <stdio.h>

int sumaiterativa(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingresa un número entero: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida. Debes ingresar un número entero.\n");
        return 1; // Salir del programa con un código de error
    }
    int resultado = sumaiterativa(n);
    printf("La suma de los dígitos de %d es: %d\n", n, resultado);
    return 0;
}