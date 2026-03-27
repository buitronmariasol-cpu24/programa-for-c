
#include <stdio.h> 

int main() {

    // Declaración de variables
    int inicio, fin, incremento;

    // Solicitar datos al usuario
    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese el numero final: ");
    scanf("%d", &fin);

    printf("Ingrese el valor de incremento: ");
    scanf("%d", &incremento);

    // Mensaje antes de mostrar los números
    printf("Numeros generados:\n");


    for (int i = inicio; incremento != 0 && i <= fin; i = i + incremento) {

        // Imprime el valor actual de i
        printf("%d\n", i);
    }

    return 0;
    }