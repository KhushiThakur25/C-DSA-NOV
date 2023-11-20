#include<stdio.h>
int main(){
    int arr[4][5]={
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };
    int size = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] != 0){
                size++;
            }
        }
    }
    int sparseArr[3][size];
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] != 0){
                sparseArr[0][k] = i;
                sparseArr[1][k] = j;
                sparseArr[2][k] = arr[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<size;j++){
            printf("%d ",sparseArr[i][j]);
        }
        printf("\n");
    }
}