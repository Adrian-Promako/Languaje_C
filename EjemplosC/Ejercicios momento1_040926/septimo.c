#include <stdio.h>

int main() {
    FILE *archivo = fopen ("secuencia.txt", "w");
    int Numero;

    //pedir el numero
    printf("ingrese un numero entero por favor: ");
    scanf("%d", &Numero);

    if (archivo == NULL) {
        printf("error al abrir el archivo.\n");
        return 1;   
    }
    for (int i =1; i<= Numero; i++){

        if(i % 2 ==0) {
            fprintf(archivo, "%d numero par\n", i);
         } else {
                fprintf(archivo, "%d numero inpar\n", i);
            }
        }
        fclose(archivo);
        printf("secuencia de numeros guardada en secuencia.txt\n");
        return 0;
    }
