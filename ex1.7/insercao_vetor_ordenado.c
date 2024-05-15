#include <stdio.h>

int main() {
    int vet[10] = {10,9,8,6,5,4,3,2,1}, i, aux;

    printf("Informe um valor:\n");
    scanf("%d", &vet[9]);

    if (vet[0] < vet[1]) {
        for (i = 8; i >= 0; i--) {
            if (vet[i + 1] > vet[i]) {
                break;
            } else {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    } else {
        for (i = 8; i >= 0; i--) {
            if (vet[i + 1] < vet[i]) {
                break;
            } else {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", vet[i]);
    }
}