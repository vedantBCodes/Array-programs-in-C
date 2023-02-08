#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10][10],i,j,r,c,t,sum=0;
    printf("How many rows you want to take:");
    scanf("%d",&r);
    printf("How many columns you want to take:");
    scanf("%d",&c);
    t=r*c;
    printf("Enter %d numbers:",t);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                printf("%d ",arr[i][j]);
                sum=sum+arr[i][j];
            }
            printf("\n");
    }
    printf("Sum:%d",sum);
}
