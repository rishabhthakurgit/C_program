#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int f=arr[0];
    for(int i=0;i<5;i++){
        arr[i]=arr[i+1];
        printf("%d",arr[i]);
    }arr[4]=f;
    
}
