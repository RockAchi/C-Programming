#include<stdio.h>
#include<math.h>
int main()
{
int c,p,q,r,s=0,n;
printf("Enter the number\n");
scanf("%d",&n);
p=q=n;
while(n!=0)
{
c++;
n=n/10;
}
while(q!=0)
{
r=q%10;
s=s+pow(r,c);
q=q/10;
}
if(p==s)
printf("The number is an Amstrong Number\n");
else 
printf("The number is not an Amstrong Number\n");
return 0;
}