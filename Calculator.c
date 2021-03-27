#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a,b;
printf(" ****WELCOME TO MY CALCULATOR**** ");
while(1)
{
printf("\n\n1.SUM\n2.SUB\n3.MUL\n4.DIV\n5.EXIT\n\n");
printf("Enter The Choice\n:-");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Enter Values:-\n");
scanf("%d",&a);
printf("+");
scanf("%d",&b);
printf("=%d",a+b);
break;
case 2:
printf("Enter Values:-\n");
scanf("%d",&a);
printf("-");
scanf("%d",&b);
printf("=%d",a-b);
break;
case 3:
printf("Enter Values:-\n");
scanf("%d",&a);
printf("*");
scanf("%d",&b);
printf("=%d",a*b);
break;
case 4:
printf("Enter Values:-\n");
scanf("%d",&a);
printf("/");
scanf("%d",&b);
printf("=%f",a/b);
break;
case 5:
exit(0);
default:
printf("//***Enter The Correct Choice***\\");
}
}
return 0;
}
