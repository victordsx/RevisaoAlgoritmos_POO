#include <stdio.h>

/*
 * RESPOSTA DA QUESTÃO 4:
 * o valor impresso da variável 'w' é 16.
 * 
 * explicação:
 * 1. inicialmente: y = 5 e z = 11.
 * 2. na linha 7: w = y + z => w = 5 + 11 = 16.
 * 3. na linha 8: Avalia a condição do 'if (y > z)', ou seja, (5 > 11).
 * 4. como a condição é FALSA, o bloco dentro do 'if' (linha 9) não é executado.
 * 5. assim, 'w' permanece com o valor 16.
 */

int main() {
    int y = 5;
    int z = 11;
    int w;

    w = y + z;

    if (y > z) {
        w = y + z;
    }

    printf("%d", w); // Saída: 16

    return 0;
}