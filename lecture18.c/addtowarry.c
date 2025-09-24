#include<stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    for(int i=0;i<2;i++){
        int sum;
        for(int j=0;j<2;j++){
        sum=a[i][j]+b[i][j];
    printf("%d ",sum);}
    }
}