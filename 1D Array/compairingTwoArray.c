/*Given two arrays arr1 and arr2 of equal size 5, the task is to find if given arrays are equal or not.
Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.*/
#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr1[] = {1,8,6,4,0};
    int arr2[] = {8,4,6,0,1};
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(arr1[i]<arr1[j])
                {
                    temp=arr1[i];
                    arr1[i]=arr1[j];
                    arr1[j]=temp;
                }
            }
        }
         for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(arr2[i]<arr2[j])
                {
                    temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                }
            }
        }
         for(i=0;i<5;i++)
        {
                if(arr1[i]!=arr2[i])
                {
                   printf("The two given array are not equal");
                   exit(0);
                }
        }
        printf("The two given array are equal");
}



