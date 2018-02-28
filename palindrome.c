#include<stdio.h>
#include<string.h>
int main() {
  char a[10]="amma",b[10];
  int i=0,l=0,k;
  //l=strlen(a);
  while(a[i]!=NULL)
  {
      l++;
      i++;
  }
  k=l-1;
  printf("%d\n",l);
  for(i=0;i<l;i++)
  {
      b[i]=a[k];
      k--;
  }
  for(i=0;i<l;i++)
  {
      printf("%c",b[i]);
  }
  for(i=0;i<l;i++)
  {
 if(a[i]==b[i])
 {
     printf("\nyes");
    
 }
 else
 {
     printf("\nno");
     
  }
  }
  return 0;
  }
