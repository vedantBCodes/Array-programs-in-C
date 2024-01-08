#include<stdio.h>
void transposeOfMatrix(int arr[10][10],int rows,int cols)
{
    int i,j;
    printf("Entered matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of entered matrix:\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d \t",arr[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,rows,cols,arr[10][10];
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of cols:");
    scanf("%d",&cols);
    printf("Enter %d array elements:",rows*cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
transposeOfMatrix(arr,rows,cols);
}

