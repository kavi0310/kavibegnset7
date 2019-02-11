#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,c=0,l=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='1'||a[i]=='0')
c++;
}
for(i=0;a[i]!='\0';i++)
{
l++;
}
if(c==l)
printf("yes");
else
printf("no");
getch();
}
