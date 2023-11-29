#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
int main()
{

    NODE *p, *q, *r, *start = NULL;
    int n, ch, pos;
    printf("\nEnter the size of list");
    scanf("%d", &n);
    for (; n > 0; n--)
    {
        p = (NODE *)malloc(sizeof(NODE));
        printf("\nEnter the data you want to insert in the list");
        scanf("%d", &p->data);
        p->next = NULL;
        if (start == NULL)
            start = p;
        else
            q->next = p;
        q = p;
    }
    do
    {

        printf("\nPress 1 to insert in the front of the link list\n");
        printf("\nPress 2 to insert in the last of the link list\n");
        printf("\nPress 3 to insert anywhere in he ink list\n");
        printf("\nPress 4 to delete the front node\n");
        printf("\n Press 5 too delete last node in the link list\n");
        printf("\nPress 6 to delete node from anywhere from the link  list\n");
        printf("\nPress 7 to traverse the link list\n");
        printf("\nPress 8 to exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nYou have selected insertion in front of link list\n");
            q = start;
            p = (NODE *)malloc(sizeof(NODE));
            printf("\nEnter the data you want to insert in the list\n");
            scanf("%d", &p->data);
            p->next = q;
            start = p;
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;
        case 2:
            printf("\n You have selected insertion in end of the link list\n");
            q = start;
            p = (NODE *)malloc(sizeof(NODE));
            printf("\nEnter the data you want to insert in the list\n");
            scanf("%d", &p->data);
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = p;
            p->next = NULL;
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;

        case 3:
            printf("\nYou have selected insertion at anywhere\n");
            q = start;
            p = (NODE *)malloc(sizeof(NODE));
            printf("\nEnter the data you want to insert in the list\n");
            scanf("%d", &p->data);
            printf("\nEnter the position at which you want to insert the node\n");
            scanf("%d", &pos);
            while (q != NULL && pos > 1)
            {
                r = q;
                q = q->next;
                pos--;
            }
            if (pos == 1)
            {
                r->next = p;
                p->next = q;
            }
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;

        case 4:
            printf("\nYou have selected deletion in the front of link list\n");
            q = start;
            start = q->next;
            free(q);
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;

        case 5:
            printf("\nYou have selected deletion in the end in the link list\n");

            q = start;
            while (q->next != NULL)
            {
                r = q;
                q = q->next;
            }
            r->next = NULL;
            free(q);
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;

        case 6:
            printf("\nYou have selected deletion at anywhere in the link list\n");
            q = start;
            printf("\n enter the position which node you want to delete\n");
            scanf("%d", &pos);
            while (q != NULL && pos > 1)
            {
                r = q;
                q = q->next;
                pos--;
            }
            r->next = q->next;
            free(q);
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;

        case 7:
            printf("\nYou have selected traverse in link list\n");
            q = start;
            while (q != NULL)
            {
                printf("%d ", q->data);
                q = q->next;
            }
            break;

        case 8:
            break;
        default:
            printf("\n Please enter the valid key\n");
        }
    } while (ch != 8);
}