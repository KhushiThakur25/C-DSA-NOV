#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int value)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = ptr;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
    }
    printf("Node is Inserted\n");
}
int dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow\n ");
        return -1;
    }
    else
    {
        struct node *temp = front;
        int temp_data = front->data;
        front = front->next;
        free(temp);
        return temp_data;
    }
}
void display()
{
    struct node *temp;
    if ((front == NULL) && (rear == NULL))
    {
        printf("Queue is Empty..\n");
    }
    else
    {
        printf("The queue is \n");
        temp = front;
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int ch, value;
    printf("Implementation of Queue using Linked List\n");
    do
    {
        printf("1.Enqueue\n 2.Dequeue\n 3.Display \n 4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to insert\n");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            printf("Deleted element is :%d\n", dequeue());
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("You entered the invalid choice..\n");
            break;
        }
    } while (ch != 4);
}
