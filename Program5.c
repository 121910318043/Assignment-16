#include<stdio.h>
//Write a program in C to find the sum of left diagonals of a matrix.
int main()
{
    int i,j,s=0,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements in the array: \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(j+1==n-i)
            s=s+a[i][j];
        printf("sum of left diagonals of a matrix = %d ",s);
}
