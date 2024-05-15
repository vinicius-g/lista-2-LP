#include <stdio.h>

int main() {
    int vet[10] = {1,1,1,4,5,5,7,8,9,10}, i, j, quant, quant_mais_freq = 0, mais_freq_pos;

    for (i = 0; i < 10; i++) {
        quant = 0;

        for (j = 0; j < 10; j++) {
            if (vet[i] == vet[j]) {
                quant++;
            }

            if (quant > quant_mais_freq) {
                quant_mais_freq = quant;
                mais_freq_pos = i;
            }
        }
    }

    printf("Elemento que mais se repete no vetor: %d", vet[mais_freq_pos]);
}