#include<stdio.h>
int main()
{
int a,b,c;
float avg;
printf("Enter the three numbers you want average:-");
scanf("%d%d%d",&a,&b,&c);
avg=(a+b+c)/3.0;
printf("Average of %d,%d and %d is %f",a,b,c,avg);
return 0;
}