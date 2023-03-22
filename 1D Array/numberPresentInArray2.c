#include<stdio.h>
void numberInAnArray(int arr[20],int Asize,int num)
{                          //This is the second method to check whether the number is present in an array or not
    int i,cnt=0;
    for(i=0;i<Asize;i++)
    {
        if(arr[i]==num)
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        printf("%d is present in a given array",num);
    }
    else
    {
         printf("%d is not present in a given array",num);
    }
}
int main()
{
    int arr[20],num,x;
    printf("How many array elements you want to enter:");
    scanf("%d",&x);
    printf("Enter %d array elements:",x);
    for(int i=0;i<x;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Enter a number you want to search:");
    scanf("%d",&num);
    numberInAnArray(arr,x,num);

}
