#include <stdio.h>

int main() {
    int movimentoCavalo = 1;

    while (movimentoCavalo--) // controla o movimento em "L" do cavalo
    {
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); // Imprime "Cima" duas vezes
        }
        printf("Esquerda\n");   // Imprime "Direta" uma vez
    }
    return 0;
}