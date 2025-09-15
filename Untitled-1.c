#include<stdio.h>
int main()
{
    int num =1248;
    int sum =0;
    while(num>0)
    {
        int rem = num%10;
        sum = sum + rem;
        num = num/10;
    }

printf("Sum of digits is %d",sum);
    return 0;
}