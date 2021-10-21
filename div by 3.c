#include<stdio.h>
void main()
{
    int a[10],n,i,count=0;
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter elements into array ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        count++;
    }
    printf("numbers of digits divisible by 3 = %d",count);
}
