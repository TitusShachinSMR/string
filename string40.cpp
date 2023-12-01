#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char a[30];
  char b[30];
  printf("enter the string 1");
  gets(a);
   printf("enter the string 2");
   gets(b);
    int i,j,n=strlen(a);
    int m=strlen(b);
    for(i=0;i<n;i++)
	{for(j=0;j<m;j++)
	{if(a[i]==b[j])
	{ a[i]='#';
	}
	}
	
	}
	for(i=0;i<n;i++)
	{if(a[i]!='#')
	{ printf("%c",a[i]);
	}
	}
	}
    
