#include<stdio.h>
//Write a program in C to find the sum of rows and columns of a Matrix.
int main()
{
    int i,j,n,m,s=0;
    printf("Enter rows and columns in the matrix: \n");
    printf("Rows: ");
    scanf("%d",&n);
    printf("Column: ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter elements in the matrix: \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    printf("Sum of rows = \n");
    for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<m;j++)
                s=s+a[i][j];
            printf("%d ",s);
        }
    printf("\nSum of column = \n");
    for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<m;j++)
                s=s+a[j][i];
            printf("%d ",s);
        }
    return 0;
}
