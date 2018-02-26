#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n%10!=0)
{
n++;
}
printf("nearest multiple is  %d",n);
return 0;
}
