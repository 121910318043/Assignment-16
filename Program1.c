#include<stdio.h>
/*Write a program to calculate the sum of two matrices each of order 3 x 3.*/
int main()
{
    int n,i,j;
    printf("Enter size of the arrays: ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter elements in first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            printf(" ");
        }
    printf("\n");
    }
    printf("Enter elements in second matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);
        printf(" ");
    }
    printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
    }
    return 0;
}
