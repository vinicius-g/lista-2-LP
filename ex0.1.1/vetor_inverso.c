#include <stdio.h>

int main() {
    int vet[5], i;

    for (i = 0; i < 5; i++) {
        printf("Informe um valor: \n");
        scanf("%d", &vet[i]);
    }

    for (i = 4; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
}