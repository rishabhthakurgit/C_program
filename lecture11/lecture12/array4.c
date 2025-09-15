#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of arr");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d element:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int oddcount=0,evencount=0;
       for(int i=0;i<n;i++) 
       {
    if(arr[i]%2==0)
        evencount++;
    else
    oddcount++;
    }printf("number of odd element:%d & number of even element:%d",oddcount,evencount);

return 0;
}
