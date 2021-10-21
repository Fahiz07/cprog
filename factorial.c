#include<stdio.h>
void main()
{
    int n,fact=1,i;
    printf(" enter a number ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d",n,fact);
}    
