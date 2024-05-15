#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, vet_acc[10], i, j, acc;

    for (i = 0; i < 10; i++) {
        acc = vet[i];

        for (j = 0; j < i; j++) {
            acc += vet[j];
        }

        vet_acc[i] = acc;
    }

    printf("O vetor acumulado resultou em:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\n", vet_acc[i]);
    }
}