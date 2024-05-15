#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,5}, num_novo, num_antigo, i;

    printf("Informe um numero a ser substituido:\n");
    scanf("%d", &num_antigo);

    printf("Informe por qual numero deve ser substituido:\n");
    scanf("%d", &num_novo);

    for (i = 0; i < 10; i++) {
        if (num_antigo == vet[i]) {
            vet[i] = num_novo;
        }
    }

    printf("Substituindo todos as ocorrencias de %d, por %d, o vetor final ficou:", num_antigo, num_novo);

    for (i = 0; i < 10; i++) {
        printf("%d\n", vet[i]);
    }
}