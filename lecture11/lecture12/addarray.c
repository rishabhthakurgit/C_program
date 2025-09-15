#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int target = 0;
    for(int i=4;i>=0;i--)
if( arr[i]==target)
{
        printf("%d ",arr[i]);  
        break;
    }
}