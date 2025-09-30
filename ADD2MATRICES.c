#include <stdio.h>
int main()
{
int i, j, m, n;
printf("Enter the number of rows : ");
scanf("%d", &m);
printf("Enter the number of columns : ");
scanf("%d", &n);
int matrix1[m][n], matrix2[m][n], sum[m][n];
printf("\nEnter %d elements for the 1st matrix : ", m*n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &matrix1[i][j]);
}}
printf("\nEnter %d elements for the 2nd matrix : ", m*n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &matrix2[i][j]);
}}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
sum[i][j] = matrix1[i][j] + matrix2[i][j];
}}
printf("The sum of the two matrices is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ", sum[i][j]);
}
printf("\n");
}
return 0;
}
