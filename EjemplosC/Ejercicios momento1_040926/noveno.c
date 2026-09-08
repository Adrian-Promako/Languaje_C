#include <stdio.h>


 int main() {

    FILE *archivo = fopen("estudiantes.txt", "w");
    int cantidad;
    int edad;
    float nota;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &cantidad);

    
    if (archivo == NULL) {
        printf("Error: no se pudo crear el archivo.\n");
        return 1;
    }

    for(int i = 1; i <= cantidad; i++) {

        printf("\nsstudiante %d\n", i);

        printf("Ingrese la edad: ");
        scanf("%d", &edad);

        printf("Ingrese la nota final: ");
        scanf("%f", &nota);

// guarda los datos en el archivo
        fprintf(archivo, "%d %.2f\n", edad, nota);
    }

    printf("\nLos datos fueron guardados en estudiantes.txt\n");
    fclose(archivo);
    return 0;
}