#include<bits/stdc++.h>
using namespace std;
struct queue_node
{
    int value;
    struct queue_node *next;
};
typedef struct queue_node queue_node; 
struct queue1
{
    queue_node *front;
    queue_node *back;
    int size;
};
typedef struct queue1 queue1;
queue1 *create_queue()
{
   queue1 *q=(queue1 *)malloc(sizeof(queue1)); 
   q->front=NULL;
   q->back=NULL;
   q->size=0;
}
bool empty_queue(queue1 *q)
{
    return q->size==0;
}
void push_queue(queue *q, int value)
{
    queue_node *qn=(queue_node *)malloc(sizeof(queue_node));
    qn->value=value;
    qn->next=NULL;
    if (empty_queue(q))
    qn->front=NULL;
    qn->back=NULL;
    else
    q->back->next=qn;
    q->back=qn;
    q->size++;
}
int pop_queue(queue1 q)
{
    if(empty_queue(q))
    cout<<"Error!!";
    else
    int value=q->top->value;
    queue_node *qn=q->front;
    q->front=q->front->next;
    free(qn);
    q->size--;
    return value;
}
int main()
{
    queue1 *q=create_queue();
    push_queue(q,7);
    push_queue(q,2);
    push_queue(q,3);
    push_queue(q,9);
    push_queue(q,1);
    while(!empty_queue(q))
        cout<<pop_queue(q);
    return 0;
}