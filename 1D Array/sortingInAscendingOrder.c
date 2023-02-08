#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j,temp,arr[100];
    printf("How many elements you want to enter:");
    scanf("%d",&x);
    printf("Enter %d elements",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Entered elements in ascending order is:");
    for(i=0;i<x;i++)
    {
        printf("%d ",arr[i]);
    }

}
