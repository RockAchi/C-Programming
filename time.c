#include<stdio.h>
int main()
{
int s,hr,r,min,sec;
printf("Enter the time in second\n");
scanf("%d",&s);
hr=s/3600;
r=s%3600;
min=r/60;
sec=r%60;
printf("Hr=%d\nMin=%d\nSec=%d",hr,min,sec);
return 0;
}