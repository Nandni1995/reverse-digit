#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
i=i*10;
i=i+n%10;
n=n/10;
}
printf("reverse of digit=%d",i);
getch();
}
