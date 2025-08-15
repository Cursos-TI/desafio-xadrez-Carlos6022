#include <stdio.h>

/**
 * Função recursiva para movimentar a torre no eixo horizontal.
 * @param casas Número de casas a mover.
 */

void moverTorre(int casas) {

    if(casas > 0) { // Executa enquanto ainda houver casas para mover
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva decrementando uma casa
    }
}

/**
 * Função recursiva para movimentar o bispo na diagonal.
 * @param casas Número de casas a mover.
 */

void moverBispo(int casas) {
    if (casas <= 0) {
        return; // Base da recursão: parar quando não houver casas
    }

    // Loop externo: movimento vertical
    for (int passoVertical = 0; passoVertical < 1; passoVertical++) {
        printf("Cima\n");

        // Loop interno: movimento horizontal
        for (int passoHorizontal = 0; passoHorizontal < 1; passoHorizontal++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva decrementando uma casa
    moverBispo(casas - 1);
}

void moverRainha(int casas) {
    if(casas > 0) { // Executa enquanto ainda houver casas para mover
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva decrementando uma casa
    }
}

/**
 * @brief Função principal do programa.
 *
 * Responsável por executar e exibir no console os movimentos
 * de diferentes peças de xadrez:
 * - Torre: desloca-se em linha reta por um número definido de casas.
 * - Bispo: desloca-se na diagonal pelo número especificado de casas.
 * - Rainha: combina movimentos da torre e do bispo, podendo mover-se em qualquer direção.
 * - Cavalo: realiza movimento em "L", composto por duas casas para cima e uma casa para a direita,
 *   controlado por loops aninhados com múltiplas variáveis e o uso de continue para priorizar o movimento vertical.
 *
 * @return Retorna 0 se o programa for executado com sucesso.
 */

int main() {
    printf("Movimento da Torre\n");
    moverTorre(5); // Torre move 5 casas
    printf("\n");
    printf("Movimento do bispo\n");
    moverBispo(5); // Bispo move 5 casas
    printf("\n");
    printf("Movimento da Rainha\n");
    moverRainha(8); // Rainha move 8 casas
    printf("\n");
    printf("Movimento do Cavalo\n");

    int movimentoCavalo = 1;

    while(movimentoCavalo--) { // controla o movimento em "L" do cavalo
        for(int passoVertical = 0, passoHorizontal = 0;
            passoVertical < 2 || passoHorizontal < 1;) {

            // Movimento vertical (cima)
            if(passoVertical < 2) {
                printf("Cima\n");
                passoVertical++;
                continue; // volta pro loop para terminar movimento vertical
            }

            // Movimento horizontal (direita)
            if(passoHorizontal < 1) {
                printf("Direita\n");
                passoHorizontal++;
                // break não é necessário aqui, mas poderia ser usado se fosse interromper cedo
            }
        }
    }

    return 0;
}