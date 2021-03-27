#include<stdio.h>
int main()
{
int f;
float c;
printf("Enter the temperature in farenhite\n");
scanf("%d",&f);
c=5*(f-32)/9.0;
printf("%d° Farenhite = %f° Celsius\n",f,c);
return 0;
}