#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello";
    char str1[10];
    int lengthStr = strlen(str);
    printf("Length of str is %d\n",lengthStr);
    printf("String is %s\n",str);
    strcpy(str1,str);
    printf("String is %s\n",str1);
    strcat(str1,"world");
    printf("After concatenation string is %s ",str1);


}