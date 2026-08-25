#include <stdio.h>
#include <stdlib.h>

// estrutura de Contato
typedef struct {
    char nome[100];
    char telefone[20];
} Contato;

int main() {
    Contato *agenda = NULL;
    int capacidade = 0;
    int totalContatos = 0;
    int opcao;

    do {
        printf("\n--- AGENDA DE CONTATOS ---\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Expande a capacidade da memória dinamicamente com realloc
            capacidade++;
            Contato *temp = (Contato *) realloc(agenda, capacidade * sizeof(Contato));

            if (temp == NULL) {
                printf("Erro de alocação de memória!\n");
                free(agenda);
                return 1;
            }
            agenda = temp;

            // Leitura dos dados do novo contato
            printf("Digite o nome: ");
            scanf(" %[^\n]", agenda[totalContatos].nome);

            printf("Digite o telefone: ");
            scanf(" %[^\n]", agenda[totalContatos].telefone);

            totalContatos++;
            printf("Contato cadastrado com sucesso!\n");

        } else if (opcao == 2) {
            if (totalContatos == 0) {
                printf("Agenda vazia.\n");
            } else {
                printf("\n--- LISTA DE CONTATOS ---\n");
                for (int i = 0; i < totalContatos; i++) {
                    printf("%d. Nome: %s | Telefone: %s\n", i + 1, agenda[i].nome, agenda[i].telefone);
                }
            }
        }

    } while (opcao != 3);

    // Liberação de memória alocada
    if (agenda != NULL) {
        free(agenda);
        agenda = NULL;
    }

    printf("Programa encerrado.\n");
    return 0;
}