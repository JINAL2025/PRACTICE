#include <stdio.h>
struct student
{
int roll[3];
char name[25];
char course[20];
char major[20];
char minor[20];
};
int main()
{
struct student s1={36,"Pandya","BTech","Major","Minor"};
printf("\n %d", s1.roll);
printf("\n %s", s1.name);
return 0;
}
