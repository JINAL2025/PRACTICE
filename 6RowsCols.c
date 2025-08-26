#include <stdio.h>
void main()
{
int rows=6;   //No. of rows to print
int cols=6;   //Maximum no. in each row (also no. of columns)
for(int i=1; i<=rows; i++)      //Loop through rows
{
for(int j=1; j<=i && j<=cols; j++)    //Loop through columns up to current row no.
{
printf("%d", j);
}
printf("\n");
}
}
