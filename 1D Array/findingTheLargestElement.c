#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j,temp,arr[100],max;
    printf("How many elements you want to enter:");
    scanf("%d",&x);
    printf("Enter %d elements:",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<x;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The largest entered element is %d:",max);
}
