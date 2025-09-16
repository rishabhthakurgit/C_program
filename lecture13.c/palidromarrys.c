#include<stdio.h>
int main (){
    int arr[5]={1,2,3,4,5};
    int check;
    for(int i=0;i<5/2;i++)
    {
        if(arr[i]!=arr[5-1-i])
        {
            check=0;
            break;
        }
    }if(check==1){
        printf("palindrom hai");
     } else{
            printf("palindrom nhi hai");
        }
    }
