//Accept 10 values and print the 4th, 7th and 9th ones
#include <stdio.h>
void main()
{
int a[10], i;
printf("Enter 10 numbers : ");
for(i=0;i<10;i++)
{
scanf("%d,", &a[i]);
}
printf("The 4th, 7th and 9th elements are :\n");
for(i=0;i<10;i++)
{
if(i==3||i==6||i==8)
{
printf("%d  ", a[i]);
}
}
}
