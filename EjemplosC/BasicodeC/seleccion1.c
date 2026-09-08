#include <stdio.h>

int main() {
    char nombre[20];
    char categoria [10]= "A";
    
    printf("Hola, este es un programa en C.\nporfavor ingresa tu nombre:");
    scanf("%s", nombre);
    printf("Hola,TU NOMBRE ES: %s y tu categoria es: %s!\n", nombre, categoria);
    return 0;
}