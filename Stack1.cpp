#include <stdio.h>
int top = -1;
void push(int arr[], int n, int element)
{
    if (top == n - 1)
    {
        printf("Stack is overflow..\n");
        return;
    }
    top++;
    arr[top] = element;
    printf("Insertion is complete..\n");
    return;
}
int pop(int arr[])
{
    if (top == -1)
    {
        printf("Stack is Underflow\n");
        return 0;
    }
    top--;
    printf("deletion is complete..");
    return arr[top + 1];
}
int peek(int arr[])
{
    if (top == -1)
    {
        printf("Stack is underflow..\n");
        return 0;
    }
    printf("Peek operation complete..\n");
    return arr[top];
}
int main()
{
    int n;
    printf("Enter the size of an Stack\n");
    scanf("%d", &n);
    int arr[n];
    int choice;
    do
    {
        printf("Press 1 for push\n");
        printf("Press 2 for pop\n");
        printf("Press 3 for peek\n");
        printf("Press 4 for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int element;
            printf("Insert value..\n");
            scanf("%d", &element);
            push(arr, n, element);
            break;
        }
        case 2:
        {
            int ele = pop(arr);
            printf("Pop element is %d\n", ele);
            break;
        }
        case 3:
        {
            int el = peek(arr);
            printf("Peek element is %d \n", el);
            break;
        }
        case 4:
            break;
        default:
        {
            printf("Enter choice is invalid..\n");
            break;
        }
        }
    } while (choice != 4);
}