#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],i,x=0,y=0;
    printf("Enter any 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            x++;
        }
    }
    printf("Even numbers are:");
    for(i=0;i<10;i++)
    {
    if(arr[i]%2==0)
        {
    if(y==(x-1))
        {
            printf("and %d ",arr[i]);
            break;
        }
            printf("%d ",arr[i]);
            y++;
        }
    }
}
