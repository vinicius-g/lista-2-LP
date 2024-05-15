#include <stdio.h>

int main() {
    float media = 0.0, vet[5];
    int i, quant = 0;

    for (i = 0; i < 5; i++) {
        printf("Informe um valor:\n");
        scanf("%f", &vet[i]);
        media += vet[i];
        quant++;
    }

    media /= (float)quant;

    printf("A media dos 5 elementos do vetor: %f", media);
}