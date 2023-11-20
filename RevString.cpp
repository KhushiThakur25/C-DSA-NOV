#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Data Structure";
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;
    printf("Before reversing %s \n", str);
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("After reversing %s \n", str);
}