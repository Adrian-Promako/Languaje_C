#include <stdio.h>

int main() {
    FILE *estudiantes = fopen("estudiantes.txt", "r");
    FILE *aprobados = fopen("aprobados.txt", "w");
    FILE *reprobados = fopen("reprobados.txt", "w");

    int edad;
    float nota;


    if (estudiantes == NULL) {
        printf("Error: no se pudo abrir estudiantes.txt\n");
        return 1;
    }

    if (aprobados == NULL || reprobados == NULL) {
        printf("error no se puedieron crear archivos.\n");
        fclose(estudiantes);
        return 1;
    }

    
    while (fscanf(estudiantes, "%d %f", &edad , &nota) == 2) {

        if (nota >= 3.0) {
            fprintf(aprobados, "%d %.2f\n", edad, nota);
        } else {
            fprintf(reprobados, "%d %.2f\n", edad, nota);
        }
    }


    fclose(estudiantes); fclose(aprobados); fclose(reprobados);

    printf("Los estudiantes fueron clasificados correctamente.\n");

    return 0;
}