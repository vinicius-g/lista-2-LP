#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,10,12}, vet2[10] = {2,4,6,8,10,12,14,16,18,20}, i, j, quant_dif = 0, diferente, indice = 0;

    for (i = 0; i < 10; i++) {
        diferente = 1;

        for (j = 0; j < 10; j++) {
            if (vet[i] == vet2[j]) {
                diferente = 0;
                break;
            }
        }

        if (diferente) {
            quant_dif++;
        }
    }

    int vet_dif[quant_dif];

    for (i = 0; i < 10; i++) {
        diferente = 1;

        for (j = 0; j < 10; j++) {
            if (vet[i] == vet2[j]) {
                diferente = 0;
                break;
            }
        }

        if (diferente) {
            vet_dif[indice] = vet[i];
            indice++;
        }
    }

    for (i = 0; i < quant_dif; i++) {
        printf("%d\n", vet_dif[i]);
    }
}