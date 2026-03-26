#include <stdio.h>

int main() {
    int precos_produtos[] = {10, 20, 35, 50, 75};
    int produtos = 5;
    int valor_especifico = 55;

    for (int i = 0; i < produtos; i++) {
        for (int j = i + 1; j < produtos; j++) {
            if (precos_produtos[i] + precos_produtos[j] == valor_especifico) {
                printf("Produtos encontrados nos índices: %d e %d\n", i, j);
                return 0; // Encerra após encontrar o par
            }
        }
    }

    printf("Nenhum par de produtos soma o valor alvo.\n");
    return 0;
}
