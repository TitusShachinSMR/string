#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char a[30];
  printf("enter  the string:\n");
  gets(a);
  int i,j,n=strlen(a);
  for(i=0;i<n;i++)
  { for(j=i+1;j<n;j++)
  { if(a[i]==a[j]&&a[i]!=' '&&a[i]!='#')
  {a[j]='#';
  }
  }
  }
  for(i=0;i<n;i++)
  { if(a[i]!='#')
  { printf("%c",a[i]);
  }
  }}
