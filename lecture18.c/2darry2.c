#include<stdio.h>
int main(){
    int m;
   printf("no of row:");
   scanf("%d",&m);
   int n;
   printf("no of colum:");
   scanf("%d",&n);
    int a[m][n];
    int b[m][n];
    printf("enter no of elements:");
    for(int i=0;i<m;i++){
        
    for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter no of elements:");
    for(int i=0;i<m;i++){
        
    for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("sum of arry:\n");
    for(int i=0;i<m;i++){
        int sum;
        for(int j=0;j<n;j++){
        sum=a[i][j]+b[i][j];
    printf("%d ",sum);}
    }printf("\n");

}
