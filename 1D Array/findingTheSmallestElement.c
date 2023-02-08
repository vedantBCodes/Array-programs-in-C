#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j,temp,arr[100],min;
    printf("How many elements you want to enter:");
    scanf("%d",&x);
    printf("Enter %d elements:",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<x;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The smallest entered element is %d:",min);
}

