#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Position* Queue;

struct Position {
    Queue next;
    Queue previous;
    int value;
} Position;

void setQueueLength(int*);

void setRange(int*);

int sortNumber(int);

int addNumber(Queue, int);

int checkRepeatedNumber(Queue, int);

Queue createPosition();

Queue randomQueue();

int main() {
    srand(time(NULL));

    Queue queue = randomQueue();

    printf("\nFila: ");

    while (queue->next) {
        printf("%d ", queue->value);
        queue = queue->next;
    }

    return 0;
}

void setQueueLength(int* length) {
    printf("\nTamanho da fila: ");
    scanf("%d", length);
}

void setRange(int* range) {
    printf("\nNúmero máximo da fila: ");
    scanf("%d", range);
}

int sortNumber(int range) {
    return rand() % range;
}

Queue randomQueue() {
    Queue firstPosition = createPosition(), queue;
    int length = 10, i = 0, range = 1;

    setQueueLength(&length);

    setRange(&range);

    queue = firstPosition;

    addNumber(queue, range);

    while (i < length) {
        queue->next = createPosition();
        queue->previous = queue;
        queue->value = addNumber(firstPosition, range);
        queue = queue->next;
        i++;
    }

    return firstPosition;
}

Queue createPosition() {
    Queue queue = (Queue) malloc(sizeof Position);

    queue->next = NULL;
    queue->previous = NULL;
    queue->value = 0;

    return queue;
}

int addNumber(Queue queue, int range) {
    int sortedNumber;

    sortedNumber = sortNumber(range);

    if (!queue->next) {
        return sortedNumber;
    } else {
        while (checkRepeatedNumber(queue, sortedNumber)) {
            printf("%d\n", sortedNumber);
            sortedNumber = sortNumber(range);
        }

        return sortedNumber;
    }
}

int checkRepeatedNumber(Queue queue, int number) {
    Queue queueForTest = queue;
    int count = 0;

    while (queueForTest->next) {
        if (queue->value == number) count++;

        queueForTest = queueForTest->next;
    }

    return count != 0;
}
