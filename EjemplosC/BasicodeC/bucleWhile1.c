#include <stdio.h>

int main() {
    int contador = 5;

    while (contador > 0) {
        printf("Cuenta regresiva: %d\n", contador);
        contador--;
    }
    printf("Despegue!!\n");
    return 0;
}