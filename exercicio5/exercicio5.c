#include <stdio.h>

/*
 * RESPOSTA DA QUESTÃO 5:
 * 
 * a) O que é um vetor? Explique o funcionamento de um vetor e como ele é tratado no C.
 * - Um vetor (array) é uma estrutura de dados homogênea que armazena uma sequência de
 *   elementos do mesmo tipo em posições contíguas de memória.
 * - No C, o nome do vetor funciona essencialmente como um ponteiro apontando para o 
 *   endereço do primeiro elemento (&vetor[0]). O acesso aos elementos é feito por 
 *   índices que começam em 0 até (tamanho - 1). O C não faz verificação de limites (bounds checking),
 *   ficando a cargo do programador controlar os acessos para evitar invasão de memória.
 * 
 * b) Explique o que é uma string e como ela é tratada em C.
 * - Em C, não existe um tipo nativo de dados "string". Uma string é tratada simplesmente 
 *   como um vetor (array) de caracteres (char).
 * - A principal característica de uma string em C é que seu término é marcado obrigatoriamente 
 *   pelo caractere nulo '\0' (null terminator). Por isso, ao declarar uma string para N caracteres,
 *   o vetor deve ter tamanho mínimo de (N + 1) para comportar esse caractere finalizador.
 */

int main() {
    // Exemplo de Vetor de inteiros
    int vetor[3] = {10, 20, 30};
    printf("Vetor - Elemento no indice 0: %d\n", vetor[0]);

    // Exemplo de String (vetor de char com o terminador '\0')
    char string[10] = "Engenharia";
    printf("String: %s\n", string);

    return 0;
}