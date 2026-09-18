#include <stdio.h>

int main() {
// creamos el puntero para escribir el archivo y  lo abrios en modo escritura
    FILE *escritura = fopen ("inventario.txt", "w");

    // verificamos que exista el archivo para poder escribir en el.
    if (escritura != NULL)  {

        //Usa "fputs" paa escribir un titulo plano en el archivo inventario.txt
        fputs("ID_PODUCTO CANTIDAD PRECIOS \n", escritura);

        // Usa fprintf para escribir un registro numerico con formato
        fprintf(escritura, "%d %d %.2df\n", 1001, 15, 24.50);

        fclose(escritura);
    }
// declaramos variables locales para guardar los datos que recuperaremos desde el archivo

char encabezado[100];
int id, cantidad;
float precio;

//Ahora volvemos a abrir el mismo documento pero en modo lectura "r" para verificar su contenido

    FILE *lectura = fopen("inventario.txt", "r");
    // verifica que el archivo de lectura haya sido encontrado y abierto
    if (lectura != NULL) {
        // usa "fgets" para extraer la primera linea completa
        fgets(encabezado, sizeof(encabezado), lectura);
        printf ("encabezado leido con fgets: %s", encabezado);

        //usaremos "fscanf" para extraer las segunda linea analizando los tipos de datos exactos
        fscanf(lectura, "%d %d %f", &id, &cantidad, &precio);
        //imprime los datos ya con el formato deseado
        printf ("Datos leidos con fscanf -> ID: %d | Cantidad: %d | precio: $%.2f\n", id, cantidad, precio);
            
        fclose(lectura);
    }
    return 0;        
}
