#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[10],arr2[10],arr3[10],i;
    printf("Enter the 5 array elements of first array:");
    for(i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the 5 array elements of second array:");
    for(i=0;i<5;i++)
        scanf("%d",&arr2[i]);
    printf("The sum of two array element is:");
    for(i=0;i<5;i++)
      {
          arr3[i]=arr1[i]+arr2[i];
          printf("%d ",arr3[i]);
      }
}
