#include<stdio.h>
#include<conio.h>
void main()
{
int n,k=1,t;
clrscr();
scanf("%d",&n);
t=n;
while(n)
{
k=k*2;
if(t<k)
{
printf("%d",k);
break;
}
n--;
}
getch();
}
