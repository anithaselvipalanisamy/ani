#include<stdio.h>
#include<string.h>
int main()
{
int i,c=0;
char s[10];
gets(s);
for(i=0;i<10;i++)
{
if(s[i]=='0'||s[i]=='1')
c++;
}
if(c!=0)
{
printf("\n is a binary string");
}
else
{
printf("\n not binary string");
}
return 0;
}
