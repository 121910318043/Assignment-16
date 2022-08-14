#include<stdio.h>
//Write a program in C to find the sum of right diagonals of a matrix.
int main()
{
    int i,j,n,s=0;
    printf("Enter size of the matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter Elements in the array: \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
            {
                s=s+a[i][j];
            }
    printf("Sum of right diagonal of a matrix = %d ",s);

}
