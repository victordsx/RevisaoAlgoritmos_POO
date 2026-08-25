#include <stdio.h>
#include <stdlib.h>

// definição da estrutura conforme o enunciado da questao
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    // 1. alocação dinâmica de memória via malloc
    aluno_t *aluno = (aluno_t *) malloc(sizeof(aluno_t));

    // verificação de sucesso na alocação
    if (aluno == NULL) {
        printf("Erro ao alocar memória para o aluno!\n");
        return 1;
    }

    // 2. leitura dos dados do aluno
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno->nome); // Lê a string com espaços

    printf("Digite o número de faltas: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);

    // 3. exibição dos dados do aluno
    printf("\n--- DADOS DO ALUNO ---\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);

    // 4. validação da aprovação (mínimo nota 7.0 e máximo de faltas/frequência conforme a regra)
    if (aluno->nota >= 7.0) {
        printf("Situação: APROVADO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }

    // 5. liberação de memória alocada
    free(aluno);
    aluno = NULL;

    return 0;
}