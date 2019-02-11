#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,n;
clrscr();
scanf("%s",&a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
getch();
}
