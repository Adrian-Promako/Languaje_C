#include <stdio.h>

int main () {

    FILE *documento = fopen("datos.txt", "r");
    int numero;

    if (documento == NULL) {
        printf("error al abrir el documento.\n");
        return 1;
    }
/* fscanf se usa para leer, requiere del apuntador de la variable, tambien el formato &d 
y tambien el nombre de la variable*/

    while (fscanf (documento, "%d", &numero)==1) {
        printf("numero. %d \n", numero);
    }
    fclose(documento);
    return 0;
}
