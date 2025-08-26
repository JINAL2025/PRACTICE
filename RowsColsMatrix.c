#include <stdio.h>
void main()
{
int rows, cols;
//Taking input from the user for no. of rows and columns
printf("Enter the number of rows and columns : ");
scanf("%d, %d", &rows, &cols);
//Outer loop for rows
for(int i=1; i<=rows; i++)
{
//Inner loop for columns
for(int j=1; j<=cols; j++)
{
printf("(%d,%d)", i, j);
}
printf("\n");    //Move to the next line after each row
}
}
