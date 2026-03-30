
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


    // Validación: evitar incremento 0
    if (incremento == 0) {
        printf("Error: el incremento no puede ser 0.\n");
        return 0; 
    }

    
    printf("Numeros generados:\n");

    // Si el inicio es menor o igual al final 
    if (inicio <= fin) {

        // Ciclo for que suma el incremento
        for (int i = inicio; i <= fin; i += incremento) {
            printf("%d\n", i); 
        }

    } else {

        // Si inicio es mayor → recorrido descendente
        for (int i = inicio; i >= fin; i -= incremento) {
            printf("%d\n", i);
        }

    }

    return 0;
}
