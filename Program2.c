#include<stdio.h>
/*Write a program to calculate the product of two matrices each of order 3 x 3.*/
int main()
{
    int n,i,j,k;
    printf("Enter size of the arrays: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter elements in first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    printf("\n");
    }
    printf("Enter elements in second matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);
    }
    printf("\n");
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
            {
            c[k][i]=0;
            for(j=0;j<n;j++)
            c[k][i]=c[k][i]+a[i][j]*b[j][i];
            }
    }
    printf("Matrix multiplication: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
            printf(" ");
        }
    printf("\n");
    }
}
