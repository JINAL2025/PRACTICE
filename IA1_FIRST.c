#include <stdio.h>
int add(int x,int y)
{
int z;
z=x+y;
return z;
}
int sub(int x,int y)
{
int z;
z=x-y;
return z;
}
int mul(int x,int y)
{
int z;
z=x*y;
return z;
}
float div(float x,int y)
{
float z;
z=x/y;
return z;
}
int main()
{
int a, b, c, d, e;
printf("Enter 5 numbers : ");
scanf("%d, %d, %d, %d, %d", &a, &b, &c, &d, &e);
int num1=add((5*a),(6*b));
int den=sub(3*c,4*d);
int num=mul(num1,7*e);
float ans=div(num,den);
printf("The value of the stated expression for the given numbers is %f", ans);
return 0;
}
