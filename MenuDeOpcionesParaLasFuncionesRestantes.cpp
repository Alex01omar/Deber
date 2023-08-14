#include <stdio.h>

void transformarMayusculas(char *texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 'a' + 'A';
        }
    }
}

void transformarMinusculas(char *texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] - 'A' + 'a';
        }
    }
}

int divisionRestasSucesivas(int dividendo, int divisor) {
    int cociente = 0;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }
    return cociente;
}

int main() {
    int opcion;

    do {
        printf("Menu:\n");
        printf("1. Transformar de minusculas a mayusculas\n");
        printf("2. Transformar de mayusculas a minusculas\n");
        printf("3. Division de dos numeros con restas sucesivas\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
            case 2: {
                char texto[100];
                printf("Ingresa el texto: ");
                scanf(" %[^\n]", texto);

                if (opcion == 1) {
                    transformarMayusculas(texto);
                } else {
                    transformarMinusculas(texto);
                }

                printf("Texto transformado: %s\n", texto);
                break;
            }
            case 3: {
                int dividendo, divisor;
                printf("Ingresa el dividendo: ");
                scanf("%d", &dividendo);
                printf("Ingresa el divisor: ");
                scanf("%d", &divisor);

                int cociente = divisionRestasSucesivas(dividendo, divisor);
                printf("Cociente: %d\n", cociente);
                break;
            }
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción invalida. Intentalo de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}

