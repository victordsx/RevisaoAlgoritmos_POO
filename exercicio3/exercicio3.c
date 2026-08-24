#include <stdio.h>

/*
 * RESPOSTA DA QUESTÃO 3:
 * A saída depende da entrada digitada no scanf. 
 * Se o usuário inserir os mesmos valores da inicialização (a = 5 e b = 11):
 * 1. A condição do if será verdadeira, pois a > 0 (5 > 0).
 * 2. O prgrama vai executar c = (float) (b/a).
 * 3. Como 'a' e 'b' são inteiros, a divisão (11 / 5) resulta no número inteiro 2 (a parte decimal é descartada).
 * 4. O (float) converte o resultado inteiro 2 para 2.0.
 * 5. O printf exibe com duas casas decimais.
 * 
 * saída final: 2.00
 */

int main() {
    int a = 5;
    int b = 11;
    float c;
    
    // O programa aguardará a digitação de dois números inteiros
    scanf("%d %d", &a, &b);

    // Assumindo a correção do operador lógico ausente no PDF original como (a == b || (a > 0))
    if (a == b || (a > 0)) {
        c = (float) (b / a);
    } else {
        c = (float) (a / b);
    }
    
    printf("%.2f\n", c);
    
    return 0;
}