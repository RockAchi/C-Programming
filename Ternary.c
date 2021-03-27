#include<stdio.h>
int main()
{
int max,a,b;
printf("Enter the two numbers\n");
scanf("%d%d",&a,&b);
max=(a>b)?a:b;
printf("max=%d",max);
return 0;
}