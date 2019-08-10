#include<bits/stdc++.h>
using namespace std;
struct stack_node
{
    int value;
    struct stack_node *next;
};
typedef struct stack_node stack_node;
struct stack1
{
    stack_node *top;
    int size;
};
typedef struct stack1 stack1;
stack1 *create_stack()
{
    stack1 *s=(stack1 *)malloc(sizeof(stack1));
    s->top=NULL;
    s->size=0;
    return s;
}
bool empty_stack(stack *s)
{
    return s->size==0;
}
void push_stack(stack1 *s, int value)
{
    stack_node *n=(stack_node *)malloc(sizeof(stack_node));
    n->value=value;
    n->next=s->top;
    s->top=n;
    s->size++;
}
int pop_stack(stack1* s)
{
    int value=s->top->value;
    stack_node *sn=s->top;
    s->top=s->top->next;
    s->size--;
    free(sn);
    return value;
}
int main()
{
    stack1 *s=create_stack();
    push_stack(s,3);
    push_stack(s,7);
    push_stack(s,1);
    push_stack(s,9);
    push_stack(s,6);
    while(!empty_stack(s))
        cout<<pop_stack(s);
    return 0;
}
