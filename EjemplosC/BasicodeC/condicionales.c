#include <stdio.h>

int main() {

    int temperatura = 18;

    if (temperatura >30) {
        printf("La temperatura es mayor a 30 grados.\n");        
    }
    else if (temperatura >=20 && temperatura <=30) {
        printf("La temperatura es agradable\n");        
    }

    else {
        printf("La temperatura es menor a 20 grados, hace bastante frio.\n");
    }
    return 0;
}

