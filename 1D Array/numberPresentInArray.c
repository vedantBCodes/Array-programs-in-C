#include<stdio.h>
#include<conio.h>
int main()    //Binary search program
{
    int x,i,arr[100],num;
    printf("How many elements you want to enter:");
    scanf("%d",&x);
    printf("Enter %d elements",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter a number you want to check:");
    scanf("%d",&num);
    for(i=0;i<x;i++)
    {
        if(arr[i]==num)
        {
            printf("%d is present in a given array",num);
            exit(0);
        }
    }
    printf("%d is not present in a given array",num);
}

