#include <stdio.h>

int main() {
    FILE *documento = fopen("datos.txt", "r");
    int numero;

    if (documento == NULL) {
        printf("Error: no se pudo abrir el archivo datos.txt\n");
        return 1;
      }

    while (fscanf(documento, "%d", &numero) == 1) {

        if (numero % 2 == 0) {

            printf("%d\n", numero);
        }
    }

    fclose(documento);

    return 0;
}