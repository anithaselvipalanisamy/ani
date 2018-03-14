#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
        
   }
   return 0;
}
