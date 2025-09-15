#include<stdio.h>
int main()
{
    int arr[5]={19,80,37,47,55};
    int max = arr[0];
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
      printf("%d",max);
}