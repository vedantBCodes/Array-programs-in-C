#include<stdio.h>
main() //program to calculate the sum of individual rows and columns
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sr,sc;  //sr-sum of rows : sc-sum of columns
    for(i=0;i<3;i++)
    {
        sr=sc=0;
        for(j=0;j<3;j++)
        {
            sr=sr+arr[i][j];
            sc=sc+arr[j][i];
        }
        printf("sr:%d,sc:%d\n",sr,sc);
    }
}
