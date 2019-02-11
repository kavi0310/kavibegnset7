#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,k=0;
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
k=a[0];
for(i=1;i<10;i++)
{
if(a[i]<k)
k=a[i];
}
printf("%d",k);
getch();
}
