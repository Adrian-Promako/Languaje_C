#include <stdio.h>



int main() {
    FILE *archivo = fopen("notas.txt", "w");
    
    int contador = 0;
    float nota;


    if (archivo == NULL) {
        printf("error, no se pudo crear el archivo.\n");
        return 1;
    }

    for (int i = 1; i <= 15; i++) {
        printf("Ingrese la nota %d: ", i);
        scanf("%f", &nota);

        fprintf(archivo, "%.1f\n", nota);
    }

    fclose(archivo);

    archivo = fopen("notas.txt", "r");

    if (archivo == NULL) {
        printf("error, no se pudo abrir el archivo.\n");
        return 1;
    }

    while 
        (fscanf(archivo, "%f", &nota) == 1) {
            if (nota == 5.0) {
                contador++;
            }
    }

    fclose(archivo);

    printf("\ncantidad de notas iguales a 5: %d\n", contador);

    return 0;
}