#include <stdio.h>
#include <stdlib.h>

/*
 * RESPOSTA DA QUESTÃO 8:
 * 
 * a) Qual o comportamento da função free?
 * - A função free(ponteiro) desaloca o bloco de memória previamente reservado pelas funções
 *   malloc, calloc ou realloc, devolvendo esse espaço para o sistema operacional.
 * 
 * b) Após chamar free, o ponteiro pode ser utilizado?
 * - Não diretamente para acessar o valor, pois ele se torna um "dangling pointer" (ponteiro solto/pendente).
 *   Tentar acessar a memória após o free gera comportamento indefinido (segmentation fault).
 *   A boa prática exige atribuir NULL ao ponteiro logo após o free (ex: ptr = NULL;).
 * 
 * c) O que causa vazamentos de memória (memory leaks)?
 * - Ocorre quando a memória é alocada dinamicamente (com malloc/calloc), mas o programa perde
 *   a referência para esse endereço sem antes liberar o espaço com a função free().
 * 
 * d) O que a instrução malloc retorna quando não consegue realizar a alocação?
 * - Retorna o ponteiro nulo (NULL).
 * 
 * e) Explique a instrução calloc.
 * - A função calloc(num_elementos, tamanho_elemento) aloca memória para um número especificado de elementos
 *   e, diferentemente do malloc, INICIALIZA TODOS OS BITS COM ZERO.
 * 
 * f) Qual a diferença entre as instruções malloc e calloc?
 * - malloc: Recebe apenas o tamanho total em bytes (1 argumento) e NÃO limpa a memória (contém "lixo" de memória).
 * - calloc: Recebe a quantidade e o tamanho unitário (2 argumentos) e INICIALIZA todos os bytes com ZERO.
 */

int main() {
    int n = 5;

    // Exemplo malloc (conteúdo inicial é lixo de memória)
    int *v_malloc = (int *) malloc(n * sizeof(int));
    if (v_malloc == NULL) {
        printf("Erro na alocacao com malloc.\n");
        return 1;
    }

    // Exemplo calloc (conteúdo inicial é totalmente zerado)
    int *v_calloc = (int *) calloc(n, sizeof(int));
    if (v_calloc == NULL) {
        printf("Erro na alocacao com calloc.\n");
        free(v_malloc);
        return 1;
    }

    // Liberação correta de memória
    free(v_malloc);
    v_malloc = NULL;

    free(v_calloc);
    v_calloc = NULL;

    printf("Alocacoes e liberacoes executadas com sucesso.\n");

    return 0;
}