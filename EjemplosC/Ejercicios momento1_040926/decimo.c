#include <stdio.h>


int main() {
    FILE *archivo = fopen("estudiantes.txt", "r");
    int edad;
    float nota;


    
    if (archivo == NULL) {
        printf("Error: no se pudo abrir el archivo estudiantes.txt\n");
        return 1;
    }

    // leer los datos estudiante
    while (fscanf(archivo, "%d %f", &edad, &nota) == 2) {

        if (edad >= 18) {
            printf("Nota: %.2f\n", nota);
        }
    }

    fclose(archivo);

    return 0;
}