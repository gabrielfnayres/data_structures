#include <stdio.h>
#include "queue.h"

int main() {
    Queue* q = createQueue();
    
    // Teste da fila
    printf("Queue created.\n");

    // Testar enqueue
    for (int i = 0; i < 10; i++) {
        enqueue(q, i);
        printf("Enqueued %d\n", i);
    }

    // Testar tamanho
    printf("Queue size after enqueue: %d\n", getSize(q));

    // Testar dequeue
    while (!empty(q)) {
        int value = dequeue(q);
        printf("Dequeued %d\n", value);
    }

    // Testar tamanho após dequeue
    printf("Queue size after dequeue: %d\n", getSize(q));

    // Tentar dequeue em uma fila vazia
    int value = dequeue(q);
    if (value == -1) {
        printf("Queue is empty. Dequeue operation failed.\n");
    }

    // Liberar memória
    free(q->data);
    free(q);

    return 0;
}
