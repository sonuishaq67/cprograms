#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void insert(int);
void delete (int);
void init();
void check(int);
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
        check(data);
        rear++;
    }
}
void check(int data)
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
void delete (int da)
{
}