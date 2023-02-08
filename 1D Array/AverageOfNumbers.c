#include<stdio.h>
int main()
{
    int arr[10],i,sum=0,avr,x;
    printf("How many numbers you want to take to calculate average:");
    scanf("%d",&x);
    printf("Enter %d numbers:",x);
    for(i=0;i<x;i++)
    {
            scanf("%d",&arr[i]);
    }
     for(i=0;i<x;i++)
     {
         sum=sum+arr[i];
     }
     avr=sum/x;
     printf("Average of  entered %d numbers is:%d",x,avr);
}
