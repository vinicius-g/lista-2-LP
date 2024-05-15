#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, vet2[10] = {1,2,3,4,5,6,7,8,9,11}, i, vet_igual = 1;

    for (i = 0; i < 10; i++) {
        if (vet[i] != vet2[i]) {
            vet_igual = 0;
            break;
        }
    }

    if (vet_igual) {
        printf("Os vetores sao identicos!");
    } else {
        printf("Os vetores nao sao identicos!");
    }
}