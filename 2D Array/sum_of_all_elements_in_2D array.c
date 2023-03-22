#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("How many rows you want to take:");
    scanf("%d",&r);
    printf("How many columns you want to take:");
    scanf("%d",&c);
    printf("Enter %d array elements:",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                sum=sum+a[i][j];
            }
    }
    printf("Sum of all array entered array elements is: %d",sum);

}
