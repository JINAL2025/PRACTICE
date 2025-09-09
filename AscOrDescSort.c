#include <stdio.h>
void main()
{
int a[5], i, j, o, n=5, temp;
printf("Enter five numbers : ");
for(i=0;i<5;i++)
{
scanf("%d,", &a[i]);
}
printf("\nFor sorting in ascending order, enter 1 and for sorting in descending order, enter 2 : ");
scanf("%d", &o);
if(o==1)
{
for(i=0;i<n-1;i++)
{
for(j=0;j=n-1-i;j++)
{
if(a[j]>a[j+1])
{
a[j]=temp;
a[j]=a[j+1];
a[j+1]=temp;
}
}}
printf("\nThe numbers in ascending order are :\n");
for(i=0;i<5;i++)
{
printf("%d ", a[i]);
}
}
else
{
if(o==2)
{
for(i=0;i<n-1;i++)
{
for(j=0;j=n-1-i;j++)
{
if(a[j]<a[j+1])
{
a[j]=temp;
a[j]=a[j+1];
a[j+1]=temp;
}
}}
printf("\nThe numbers in descending order are :\n");
for(i=0;i<5;i++)
{
printf("%d ", a[i]);
}
}
else
{
printf("\nPlease enter either 1 or 2");
}
}
}
