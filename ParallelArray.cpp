#include <stdio.h>
int main()
{
    int n = 5;
    int max = 0;
    int index = -1;
    int roll_no[] = {1, 2, 3, 4, 5};
    int marks[] = {25, 50, 32, 30, 18};
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
            index = i;
        }
    }
    printf("Roll no %d has highest marks", roll_no[index]);
}