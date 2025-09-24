#include<stdio.h>
int main(){
    int r;
    printf("enter num of row:");
    scanf("%d",&r);
    int c;
    printf("enter num of colum:");
    scanf("%d",&c);
    
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
        }  
    }  printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
    }printf("\n");
}