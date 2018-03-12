#include<stdio.h>
#include<string.h>
int main()
{
char a[10]; int i,l,n;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{ 
n=l;

if((n%2==0)&&(i==n/2 || i==(n/2)-1))
{
a[i]='*';
}
else if(i==n/2)
{
        a[i]='*';   
}
}
printf("%s",a);
return 0;
}
