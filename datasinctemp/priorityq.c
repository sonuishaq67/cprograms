#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void insert(int);
void delete (int);
void init();
void put(int);
void display();
int pri_que[MAX];
int front, rear;
void init()
{
    front = rear = -1;
}
void insert(int data)
{
    if (rear > MAX - 1)
    {
        return;
    }
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        pri_que[rear] = data;
        return;
    }
    else
    {
        put(data);
        rear++;
    }
}
void put(int data)
{
    int i, j;
    for (i = 0; i <= rear; i++)
        if (data >= pri_que[i])
        {
            for (j = rear + 1; j > i; j--)
                pri_que[j] = pri_que[j - 1];
            pri_que[i] = data;
            return;
        }
    pri_que[i] = data;
}
void delete (int data)
{
    int i;
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty no elements to delete");
        return;
    }
    for (i = 0; i <= rear; i++)
    {
        if (data == pri_que[i])
        {
            for (; i < rear; i++)
            {
                pri_que[i] = pri_que[i + 1];
            }
            pri_que[i] = -99;
            rear--;
            if (rear == -1)
                front = -1;
            return;
        }
    }
    printf("\n%d not found in queue to delete", data);
}
void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
    for (front = front; front <= rear; front++)
        printf(" %d ", pri_que[front]);
    front = 0;
}

int main()
{
    insert(60);
    insert(30);
    insert(20);
    insert(40);
    insert(50);
    display();
    return 0;
}