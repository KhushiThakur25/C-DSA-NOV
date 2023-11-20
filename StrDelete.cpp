#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Data Structure";
    int index = 7;
    int len = strlen(str);
    int i;
    for(i = index;i<len;i++){
        str[i] = str[i+1];
    }
    printf("String after deletion %s ",str);
}