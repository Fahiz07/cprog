#include<stdio.h>
void main()
{
    int num,digit,rev=0,temp;
    printf(" enter a number ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
    }
    if(temp==rev)
    printf("%d is palindrome",temp);
    else
    printf("%d is not a palindrome",temp);
}    
