#include<stdio.h>
#include<conio.h>
int main()
{
   int num,i,x,j,y,z;
    printf("Enter a number:");
    scanf("%d",&num);
        x=num%10;
    while(num>0)
    {
        y=num%10;
        num=num/10;
    }
    z=y;
    printf("Sum of 1st and last digit in an entered number is:%d",z+x);
}
