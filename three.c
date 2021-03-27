#include<stdio.h>
int main()
{
char a[]="123456";
int n=sizeof(a)/sizeof(a[0]);
int i,j;
for(i=0;i<n-2;i++)
{
for(j=i;j<=i+2;j++)
{
printf("%c",a[j]);
}
}
return 0;
}