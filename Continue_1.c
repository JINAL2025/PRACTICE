#include <stdio.h>
void main()         //Loop from 1 to 10
{
for(int i=1; i<=10; i++)
{
if(i==5)            //SKIP PRINTING THE NUMBER 5
{
//continue;           //Skip the rest of the loop for i==5
}
printf("%d", i);
printf("\n");
}
}
