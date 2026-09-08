#include <stdio.h>

int main() {

    FILE *documento = fopen("datos.txt", "r");
    FILE *pares = fopen("pares.txt", "w");
    int numero;

    if (documento == NULL) {
        printf("Error: no se pudo abrir datos.txt\n");
        return 1;
    }

    if (pares == NULL) {
        printf("Error: no se pudo crear pares.txt\n");
        fclose(documento);
        return 1;
    }
    
    while (fscanf(documento, "%d", &numero) == 1) {

        if (numero % 2 == 0) {
            fprintf(pares, "%d\n", numero);
        }
    }

    fclose(documento);
    fclose(pares);

    printf("Los numeros pares se guardaron en pares.txt\n");

    return 0;
}