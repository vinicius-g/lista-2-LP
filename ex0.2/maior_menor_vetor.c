#include <stdio.h>

int main() {
    float vet[5], maior, menor;
    int i;

    printf("Informe um valor:\n");
    scanf("%f", &vet[0]);
    maior = vet[0];
    menor = vet[0];

    for (i = 1; i < 5; i++) {
        printf("Informe um valor:\n");
        scanf("%f", &vet[i]);

        if (vet[i] > maior) {
            maior = vet[i];
        }

        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("Maior valor: %f\n", maior);
    printf("Menor valor: %f\n", menor);
}