#include<stdio.h>
#include<conio.h>
main()
{
    int i,arr[5];
    printf("Enter any 5 array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Array element at index %d is %d \n",i,arr[i]);
    }
}
