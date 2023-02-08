#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,arr[100],sum=0;
    printf("How many numbers you want to take:");
    scanf("%d",&x);
    printf("Enter %d elements:",x);
    for(i=0;i<x;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
    sum=sum+arr[i];
    }
    printf("Sum of ");
    for(i=0;i<x;i++)
    {
         if(i==(x-1))
    {
        printf("and %d ",arr[i]);
    }
    else
    {
        printf("%d ",arr[i]);
    }
    }
    printf("is:%d",sum);

}
