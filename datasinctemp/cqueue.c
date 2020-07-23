#include <stdio.h>
#include <stdlib.h>
struct ArrayQueue
{
    int front, rear;
    int capacity;
    int *array;
};

struct ArrayQueue *Queue(int size)
{
    struct ArrayQueue *Q = malloc(sizeof(struct ArrayQueue));
    if (!Q)
        return NULL;
    Q->capacity = size;
    Q->front = Q->rear = -1;
    Q->array = malloc(size * sizeof(int));
    if (!Q->array)
        return NULL;
    return Q;
};

int isEmpty(struct ArrayQueue *Q)
{
    return (Q->front == -1);
}

int isFull(struct ArrayQueue *Q)
{
    return ((Q->rear + 1) % Q->capacity == Q->front);
}

int QueueSize(struct ArrayQueue *Q)
{
    return (Q->capacity - Q->front + Q->rear + 1) % Q->capacity;
}

void Enqueue(struct ArrayQueue *Q, int data)
{
    if (isFull(Q))
        printf("\nStack Overflow\n");
    else
    {
        Q->rear = (Q->rear + 1) % Q->capacity;
        Q->array[Q->rear] = data;
        if (Q->front == -1)
            Q->front = Q->rear;
    }
}

int Dequeue(struct ArrayQueue *Q)
{
    int data = 0;
    if (isEmpty(Q))
    {
        printf("\nQueue is Empty\n");
        return -__INT_MAX__ - 1;
    }
    else
    {
        data = Q->array[Q->front];
        if (Q->front == Q->rear)
            Q->front = Q->rear = -1;
        else
           return Q->array[ Q->front = (Q->front) % Q->capacity];
    }
}

int main()
{
    struct ArrayQueue *sq;
    sq = Queue(5);
    Enqueue(sq, 10);
    Enqueue(sq, 20);
    Enqueue(sq, 30);
    Enqueue(sq, 40);
    Enqueue(sq, 50);
    printf("%d", Dequeue(sq));
    return 0;
}