#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,6,8,31,141}, ordenacao = 3, i;

    for (i = 0; i < 9; i++) {
        if (vet[i] <= vet[i + 1] && (ordenacao == 3 || ordenacao == 1)) {
            ordenacao = 1;
        } else if (vet[i] >= vet[i + 1] && (ordenacao == 3 || ordenacao == 2)) {
            ordenacao = 2;
        } else {
            ordenacao = 0;
            break;
        }
    }

    if (ordenacao == 1) {
        printf("O vetor esta em ordem crescente: \n");
    } else if (ordenacao == 2) {
        printf("O vetor esta em ordem decrescente: \n");
    } else {
        printf("O vetor nao esta organizado: \n");
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", vet[i]);
    }
}