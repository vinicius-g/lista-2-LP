#include <stdio.h>

int main() {
    int vet[5] = {1,2,3,4,6}, i, num_pares = 0;

    for (i = 0; i < 5; i++) {
        if (vet[i] % 2 == 0) {
            num_pares++;
        }
    }

    printf("O vetor possui %d numeros pares", num_pares);
}