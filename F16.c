#include<stdio.h>
int main(){
    int res=0;
    int num;
    scanf("%d",&num);
    int original= num;

    while(num>0){
        int digit = num%10;
        res = res*10 +digit;
        num = num/10;
    }

if(original==res){
    printf("Palindrome");}
    else{
        printf("Not a Palindrome");
    }
    
    return 0;
}