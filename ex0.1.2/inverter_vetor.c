#include <stdio.h>

int main() {
    int quant, i, aux;

    printf("Informe a quantidade de termos do vetor:\n");
    scanf("%d", &quant);
    int vet[quant];

    for (i = 1; i <= quant; i++) {
        printf("Informe o termo %d:\n", i);
        scanf("%d", &vet[i - 1]);
    }

    for (i = 0; i < quant/2; i++) {
        aux = vet[i];
        vet[i] = vet[(quant - 1) - i];
        vet[(quant - 1) - i] = aux;
    }

    for (i = 0; i < quant; i++) {
        printf("%d ", vet[i]);
    }
}