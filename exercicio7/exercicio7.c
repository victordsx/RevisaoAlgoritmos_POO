#include <stdio.h>
#include <stdlib.h>

/*
 * RESPOSTA DA QUESTÃO 7:
 * 
 * a) Explique os diferentes modos de abertura de arquivos (fopen):
 * - "r"  (read): abre o arquivo apenas para leitura. O arquivo deve existir préviamente.
 * - "w"  (write): abre o arquivo para escrita. Cria um novo arquivo se não existir, ou apaga todo o conteúdo existente se o arquivo já existir.
 * - "a"  (append): abre para escrita no final do arquivo. Se não existir, cria o arquivo; se existir, preserva os dados antigos.
 * - "rb", "wb", "ab": Mesmos modos citados acima, porém especificados para arquivos BINÁRIOS.
 * - "r+", "w+", "a+": Modos mistos (permitem leitura e escrita simultaneamente).
 * 
 * b) Explique o funcionamento das funções:
 * - fgets: Le uma linha ou uma quantidade de caracteres de um fluxo (arquivo ou teclado) e armazena em uma string, preservando a segurança contra estouro de buffer (buffer overflow).
 * - fprintf: funciona como o printf, porém grava a saída formatada diretamente em um ponteiro de arquivo (FILE*).
 * - fread: Le blocos de dados binários brutos de um arquivo diretamente para uma estrutura ou variável de memória.
 * - fwrite: Escreve blocos de dados binários brutos da memória diretamente em um arquivo.
 */

typedef struct {
    int id;
    float valor;
} ExemploData;

int main() {
    FILE *arq = fopen("exemplo.txt", "w");
    if (arq != NULL) {
        // exemplo fprintf
        fprintf(arq, "Texto formatado salvo com fprintf.\n");
        fclose(arq);
    }

    arq = fopen("exemplo.txt", "r");
    if (arq != NULL) {
        char buffer[100];
        // exemplo fgets
        if (fgets(buffer, sizeof(buffer), arq) != NULL) {
            printf("Lido do arquivo via fgets: %s", buffer);
        }
        fclose(arq);
    }

    // exemplo conceitual de fwrite e fread em modo binário
    ExemploData dadoEnvio = {1, 99.5f};
    FILE *arqBin = fopen("dados.bin", "wb");
    if (arqBin != NULL) {
        fwrite(&dadoEnvio, sizeof(ExemploData), 1, arqBin); // Exemplo fwrite
        fclose(arqBin);
    }

    ExemploData dadoReceita;
    arqBin = fopen("dados.bin", "rb");
    if (arqBin != NULL) {
        fread(&dadoReceita, sizeof(ExemploData), 1, arqBin); // Exemplo fread
        printf("Dado binario lido: ID=%d, Valor=%.2f\n", dadoReceita.id, dadoReceita.valor);
        fclose(arqBin);
    }

    return 0;
}