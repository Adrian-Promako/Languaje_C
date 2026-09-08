#include <stdio.h>

int main() {

    /*Es importante para imprimir una variable en pantalla, sea entera
    o cadena, agregar el simbolo % junto con su correspondiente
    %c, %s, %d etc, luego fuera del las comillas el nombre de la variable a mostrar.*/
    char nombre[20]="Adrian Moreno";
    printf("El nombre es: %s\n", nombre);

    for (int i = 1; i <= 5; i++) {
        printf("Iteracion del bucle for: %d\n", i);
    }
    return 0;
}