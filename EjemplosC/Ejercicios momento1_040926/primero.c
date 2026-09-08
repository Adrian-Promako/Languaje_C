#include <stdio.h>


int main() {

    FILE *documento = fopen("datos.txt", "w");

    if (documento == NULL) {
        printf("error al crear el documento.\n");
        return 1;
    }
    for (int i = 1; i<=10;i++) {
        fprintf(documento, "%d\n", i);
    } 
    fclose(documento);

} 
