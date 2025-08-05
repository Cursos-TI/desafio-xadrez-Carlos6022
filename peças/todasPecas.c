#include <stdio.h>

int main() {

    printf("Movimento Torre\n"); //Imprime de qual peça e o movimento

    // Mover a Torre 5 casas para a direita
    for(int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Separa o movimento das peças com uma linha em branco



    printf("Movimento Bispo\n"); //Imprime de qual peça e o movimento

    int i = 0;
    // Mover o bispo cinco casas na diagonal
    while(i < 5) {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        i++;
    }
    printf("\n");// Separa o movimento das peças com uma linha em branco



    printf("Movimento Rainha\n"); //Imprime de qual peça e o movimento 

    int j = 0;
    // Mover a rainha oito casa
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        j++;

    } while(j < 8);
    printf("\n");// Separa o movimento das peças com uma linha em branco


    printf("Movimento Cavalo\n"); //Imprime de qual peça e o movimento
    
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