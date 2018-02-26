#include<stdio.h>
#include<string.h>
int main()
{
int i,c=1,l;
char s[100];
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==' ')
{
c++;
}
}
printf("%d",c);
return 0;
}
