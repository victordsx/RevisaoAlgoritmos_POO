#include <stdio.h>

int main() {
    float nota, frequencia;

    printf("Digite a nota do estudante (0 a 10): ");
    scanf("%f", &nota);

    printf("Digite a frequência do estudante em %% (0 a 100): ");
    scanf("%f", &frequencia);

    if (nota >= 7.0 && frequencia >= 75.0) {
        printf("\nEstudante APROVADO!\n");
    } else {
        printf("\nEstudante REPROVADO!\n");
    }

    return 0;
}