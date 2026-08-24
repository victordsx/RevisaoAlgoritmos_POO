#include <stdio.h>

/*
 * RESPOSTA DA QUESTÃO 6:
 * 
 * a) Qual a saída do programa?
 * - O primeiro laço (while) imprime do 0 ao 9:
 *   while: 0, while: 1, ..., while: 9. Ao sair do while, a variável 'i' vale 10.
 * - O segundo laço (do..while) executa o bloco primeiro e depois testa a condição.
 *   Ele imprime "do: 10", incrementa 'i' para 11 e testa se (11 < 10). Como é falso, ele encerra.
 * 
 * b) Qual a diferença entre o while e o do..while?
 * - O 'while' testa a condição ANTES de executar o bloco de código. se for falsa de início, nunca executa.
 * - O 'do..while' executa o bloco pelo menos UMA VEZ antes de testar a condição no final.
 * 
 * c) Como fica a implementação equivalente usando o laço 'for'?
 *   for (int i = 0; i < 10; i++) { printf("for: %d\n", i); }
 * 
 * d) Qual a diferença entre while e for? Quando usar um ou outro?
 * - Usar 'for' quando souber exatamente o número de repetições (iterações contadas).
 * - Usar 'while' quando não souber quantas vezes a repetição irá ocorrer (depende de uma condição de parada variável).
 */

int main() {
    int i = 0;

    // código original do enunciado:
    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }

    do {
        printf("do: %d\n", i);
        i++;
    } while (i < 10);

    // c) Implementação equivalente do bloco usando 'for':
    printf("\n-- Equivalente com FOR --\n");
    for (int j = 0; j < 10; j++) {
        printf("for: %d\n", j);
    }

    return 0;
}