#include<stdio.h>
int n=10;
int A(int n);
int main()
{
A(n);
}
int A(int n)
{
if(n>=1)
{
printf("%d\t",n);
A(n-1);
printf("%d\t",n=n+9);
printf("%d\t",n=n+9);
}
}