#include <stdio.h>

int main () {
    FILE*documento =fopen("datos.txt", "r");
    int numero;
    int cantidad =0;

    if (documento == NULL) {
        printf("error al abrir el documento.\n");
        return 1;
    }
    while (fscanf(documento, "%d", &numero)==1){
        cantidad++;
    }
    printf("cantidad de numeros totales: %d\n", cantidad);

    fclose(documento);
    return 0;
}