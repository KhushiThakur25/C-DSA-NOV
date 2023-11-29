#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
} *top, *top1, *temp;
void push(int value)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(1 * sizeof(struct node));
        top->ptr = NULL;
        top->info = value;
    }
    else
    {
        temp = (struct node *)malloc(1 * sizeof(struct node));
        temp->ptr = top;
        temp->info = value;
        top = temp;
    }
    printf("Node is inserted\n");
}
int pop()
{
    top1 = top;
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
    {
        top1 = top1->ptr;
    }
    int popped = top->info;
    free(top);
    top = top1;
    return popped;
}
void display()
{
    top1 = top;
    if (top1 == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("The stack is\n");
    while (top1 != NULL)
    {
        printf("%d-->", top1->info);
        top1 = top1->ptr;
    }
}
int main()
{
    int ch, value;
    do
    {
        printf("Implementation of stack using linked list\n");
        printf("1. PUSH \n 2. POP \n 3.DISPLAY \n 4.exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to insert\n");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("You typed the invalid choice..\n");
        }
    } while (ch != 4);
}
