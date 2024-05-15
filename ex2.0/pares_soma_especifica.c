#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, num, i, j;

    printf("Informe um valor:\n");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vet[i] + vet[j] == num) {
                printf("Os valores %d e %d, nas posicoes %d e %d, respectivamente, resultam em %d\n", vet[i], vet[j], i, j, num);
            }
        }
    }
}