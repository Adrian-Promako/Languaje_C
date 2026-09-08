#include <stdio.h>

int main() {
    FILE *archivo;
    int Numero;

    do {
        printf("Ingrese un numero entero entre 1 y 10: ");
        scanf("%d", &Numero);

        if (Numero < 1 || Numero > 10) {
            printf("Numero fuera de rango. Intente nuevamente.\n");
        }

    } while (Numero < 1 || Numero > 10);

    archivo = fopen("tabla.txt", "w");

    if (archivo == NULL) {
        printf("Error: no se pudo crear el archivo.\n");
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        fprintf(archivo, "%d x %d = %d\n", Numero, i, Numero * i);
    }

    fclose(archivo);

    printf("La tabla de multiplicar se guardo en tabla.txt\n");

    return 0;
}