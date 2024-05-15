#include <stdio.h>

int main() {
    float vet[5] = {1,2,3,4,5}, num;
    int i, encontrou = 0;

    printf("Informe o elemento a ser pesquisado:\n");
    scanf("%f", &num);

    for (i = 0; i < 5; i++) {
        if (vet[i] == num) {
            encontrou = 1;
            break;
        }
    }

    if (encontrou) {
        printf("O elemento '%f' esta contido no vetor", num);
    } else {
        printf("O elemento '%f' nao esta contido no vetor", num);
    }
}