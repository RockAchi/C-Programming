#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a;
while(1)
{
printf("\n\n1.Sin\n2.Cos\n3.Tan\n4.Exit\n");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\nSin:-\n");
printf("\t0\t30\t   45\t    60\t   90\n\n\t0 \t1/2 \t1/root2   root3/2   1");
break;
case 2:
printf("\nCos:-\n");
printf("\t0\t30\t    45\t    60\t    90\n\n\t1     root3/2 \t 1/root2    1/2      0");
break;
case 3:
printf("\nTan:-\n");
printf("\t0\t30\t 45\t60\t 90\n\n\t0     1/root3 \t 1     root3   Infinity");
break;
case 4:
exit(0);
default:
printf("Wrong Choice\n");
}
}
return 0;
}