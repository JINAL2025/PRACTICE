#include <stdio.h>
#include <conio.h>
void main()
{
FILE*fpw = NULL;
char ch;
clrscr();
printf("Enter your details at the end, put a # sign,\n");
fpw=fopen("my1stfl.dat","w");
ch=fgetc(stdin);
while(ch!='#')
{
fputc(ch,fpw);
ch=fgetc(stdin);
};
fclose(fpw);
printf("\n The data has been successfully written in the file");
}
