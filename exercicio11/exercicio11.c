#include <stdio.h>

/*
 * RESPOSTA DA QUESTÃO 11:
 * 
 * a) Qual a diferença entre as estruturas pilha e fila?
 * - Pilha (LIFO - Last In, First Out): O último elemento a entrar é o primeiro a sair.
 *   A inserção e a remoção acontecem no mesmo extremidade (topo).
 * - Fila (FIFO - First In, First Out): O primeiro elemento a entrar é o primeiro a sair.
 *   A inserção ocorre no final (fim) e a remoção ocorre no início (frente).
 * 
 * b) Quais as vantagens e desvantagens da fila?
 * - Vantagens: Garante a ordem de chegada (justiça/processamento sequencial) e evita o descarte prematuro de requisições.
 * - Desvantagens: Acesso restrito apenas ao primeiro elemento (sem acesso aleatório aos do meio) e potencial desperdício de espaço se implementada como vetor estático sem reuso circular.
 * 
 * c) Quais as vantagens e desvantagens da pilha?
 * - Vantagens: Excelente para controle de estados, histórico de operações, recursão e reversão de dados; algoritmo de implementação simples.
 * - Desvantagens: Acesso estritamente restrito ao elemento do topo; os elementos intermediários ou da base ficam inacessíveis até que o topo seja removido.
 * 
 * d) Quais as suas aplicações?
 * - Pilha: Botão "Desfazer" (Ctrl+Z) em editores, histórico de navegação do navegador, gerenciamento de chamadas de funções (call stack) e validação de parênteses/escopos.
 * - Fila: Filas de impressão, gerenciamento de tarefas/processos no sistema operacional, atendimento de requisições web e buffers de streaming de áudio/vídeo.
 * 
 * e) Qual a diferença deles para a lista?
 * - Pilha e Fila são estruturas RESTCRITAS: possuem regras rígidas sobre onde você pode inserir e remover elementos (apenas topo, frente ou fim).
 * - Lista é uma estrutura FLEXÍVEL: permite inserção, remoção e acesso a elementos em qualquer posição (início, meio ou fim).
 */

int main() {
    printf("resposta teórica da questão 11 sobre Pilha, Fila e Lista.\n");
    return 0;
}