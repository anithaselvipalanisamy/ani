#include<stdio.h>

int main()
{
int i,count=0,n;
scanf("%d",&n);
char a[n];
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
printf("%c",a[i]);
}
for(i=0;i<n;i++)
{

    while(a[i]!='\t')
    {
count++;
}
}

printf("\nthe number of character is = %d ",count);
return 0;
}
