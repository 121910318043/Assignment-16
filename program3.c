#include<stdio.h>
/*Write a program in C to print or display an upper triangular matrix.*/
int main()
{
    int n,i,j,c=0;
    printf("Enter size of the matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements in the matrix: \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("Transpose of the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
            printf("%d ",a[j][i]);
    }
    printf("\n");
    }
    return 0;
}
