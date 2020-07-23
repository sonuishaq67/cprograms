#include <stdio.h>
#include <stdbool.h>
struct data
{
    int priority;
    int value;
};
struct pqueue
{
    struct data pdata[10];
    int front, rear, max;
};
bool isFull(struct pqueue q)
{
    if (q.rear == 10)
        return true;
    return false;
}
bool isEmpty(struct pqueue q)
{
    if (q.front == q.rear)
    {
        return true;
    }
    return false;
}
insert(struct pqueue pq, int value, int priority)
{
    if (!isFull(pq))
    {
        if (isEmpty(pq))
        {
            pq.pdata[0].value = value;
            pq.pdata[0].priority = priority;
            pq.rear++;
        }
        else
        {

            if (pq.pdata[pq.rear].priority > priority)
            {

                    for 



            }   
        }
    }
    else
    {
        printf("pqueue Is full");
    }
}
int main()
{
    struct pqueue pq;
    insert(pq, 10, 1);
    insert(pq, 20, 4);
    insert(pq, 70, 3);
    insert(pq, 23, 2);
    return 0;
}