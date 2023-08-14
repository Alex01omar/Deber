#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertirAMayusculas(char cadena[]) {
    strupr(cadena);  // Convertir la cadena a mayúsculas
}

void imprimirMayusculasInterca_ladas(const char cadena[]) {
    bool esMayuscula = true;
    for (size_t i = 0; i < strlen(cadena); i++) {
        if (esMayuscula) {
            printf("%c", cadena[i]);
        } else {
            printf("%c", tolower(cadena[i]));
        }
        esMayuscula = !esMayuscula;  // Alternar entre mayúsculas y minúsculas
    }
    printf("\n");
}

int main() {
    char cadena[100];
    printf("Ingrese una frase u oracion: ");
    scanf("%[^\n]", cadena);  // Leer la cadena hasta que se ingrese Enter

    convertirAMayusculas(cadena);
    imprimirMayusculasInterca_ladas(cadena);

    return 0;
}

