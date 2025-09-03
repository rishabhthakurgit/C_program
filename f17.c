#include<stdio.h>
int main()
{
    int i,n;
    if(n<=1){
        printf("Not a prime");
        
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("Not a prime");
            
        }printf("Prime");
    }
    return 0;
}