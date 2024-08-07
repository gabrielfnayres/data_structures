#include "linked_list.h"

int main() {
    // Criar uma lista ligada
    LinkedList* ll = createLinkedList();

    // Testar inserção de elementos
    printf("Inserindo elementos:\n");
    if (insert(ll, 1, 10) == 1) { // Inserir no início
        printf("Elemento 10 inserido no início.\n");
    }
    if (insert(ll, 2, 20) == 1) { // Inserir no fim
        printf("Elemento 20 inserido no fim.\n");
    }
    if (insert(ll, 2, 15) == 1) { // Inserir no meio
        printf("Elemento 15 inserido no meio.\n");
    }

    // Imprimir lista
    printf("Lista após inserções:\n");
    printLL(ll);
    printf("NULL\n");

    // Testar modificação de elementos
    printf("\nModificando elemento na posição 2 para 25:\n");
    if (change_element(ll, 2, 25) == 1) {
        printf("Elemento modificado com sucesso.\n");
    } else {
        printf("Falha ao modificar o elemento.\n");
    }
    printLL(ll);
    printf("NULL\n");

    // Testar obter elementos
    printf("\nElemento na posição 1: %d\n", getElement(ll, 1));
    printf("Elemento na posição 2: %d\n", getElement(ll, 2));
    printf("Elemento na posição 3: %d\n", getElement(ll, 3));

    // Testar obter a posição de um elemento
    printf("\nPosição do elemento com valor 25: %d\n", getPos(ll, 25));
    printf("Posição do elemento com valor 15: %d\n", getPos(ll, 15));
    printf("Posição do elemento com valor 10: %d\n", getPos(ll, 10));

    // Testar remoção de elementos
    printf("\nRemovendo elemento na posição 2:\n");
    int removed = removeel(ll, 2);
    if (removed != -1) {
        printf("Elemento removido: %d\n", removed);
    } else {
        printf("Falha ao remover o elemento.\n");
    }

    // Imprimir lista após remoção
    printf("Lista após remoção:\n");
    printLL(ll);
    printf("NULL\n");

    // Testar a verificação se a lista está vazia
    printf("\nVerificação se a lista está vazia: %d\n", empty(ll));

    // Inserir novamente e verificar se a lista está cheia
    for (int i = 0; i < 5; ++i) {
        if (insert(ll, getSize(ll) + 1, i * 10) == 1) {
            printf("Elemento %d inserido na posição %d.\n", i * 10, getSize(ll));
        } else {
            printf("Falha ao inserir o elemento %d.\n", i * 10);
        }
    }
    printf("\nLista após inserção de novos elementos:\n");
    printLL(ll);
    printf("NULL\n");

    printf("\nVerificação se a lista está cheia (não aplicável com MAXTAM 100000): %d\n", full(ll));

    // Liberar memória
    while (!empty(ll)) {
        removeel(ll, 1);
    }
    free(ll);
}