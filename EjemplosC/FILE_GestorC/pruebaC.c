#include <stdio.h>

int main() {

    FILE *fp = fopen("Datos1.txt","r");

    char uno [10], dos [10], tres[10];

/*Para el uso de la funcion de lectura fscanf se requiere tres cosas:
el puntero, el formato de los datos y el nombre de las variables involucradas.*/
    if (fp != NULL) {
        fscanf(fp, "%s %s %s", uno, dos, tres);
        printf("Los valores son:\n %s\n %s\n %s\n", uno, dos, tres);
        return 0; //indica que se ejecuto correctamente
     } else {
            printf("archivo no creado\n");    
            return 1;
            fclose(fp);
        } 
    } 