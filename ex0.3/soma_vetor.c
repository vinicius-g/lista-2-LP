#include <stdio.h>

int main() {
    float vet[5], acc = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Informe um valor:\n");
        scanf("%f", &vet[i]);
        acc += vet[i];
    }

    printf("Soma dos valores do vetor: %f", acc);
}