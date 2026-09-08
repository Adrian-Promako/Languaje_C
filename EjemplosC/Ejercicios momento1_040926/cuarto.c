#include <stdio.h>

int main() {


    FILE *documento = fopen("datos.txt", "r");
    int numero;
    int suma = 0;

    
    if (documento == NULL) {
        printf("Error nose pudo abrir el archivo datos.txt\n");
        return 1;
    }
    
    while(fscanf(documento, "%d", &numero) == 1) {
        suma = suma + numero;
    }
  
    printf("La suma total de los numeros es: %d\n", suma);
    fclose(documento);
    
    return 0;
}