#include <stdio.h>

int main() {

    int numero;
    int buscado;
    int encontrado = 0;
    FILE *documento = fopen ("datos.txt", "r");
    
    printf("ingrese un numero de 1 a 10 porfavor: ");
    scanf("%d", &buscado);

    if (documento == NULL) {
        printf("error al abrir el archivo\n");
        return 1;
    }
    while (fscanf(documento, "%d", &numero) ==1) {

        if (numero == buscado) {
        encontrado = 1;
        break;
    }
}

fclose(documento);

    if (encontrado == 1) {
        printf("el numero %d se encuentra en el archivo\n", buscado);
    } else {
        printf("el numero %d no se encuentra en el archivo\n", buscado);
        
    }
    return 0;
}
