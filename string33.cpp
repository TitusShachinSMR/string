#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char a[30];int l=0,i,j;
  char b[30];
  printf("enter the string 1");
  gets(a);
   printf("enter the string 2");
   gets(b);
    int n=strlen(a);
    int m=strlen(b);
    if(m!=n){ printf("it is not possible");exit(1);
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{ if(a[i]==a[j])
	{ l=l+1;a[j]='#';
	}         
	}
	}
	if(l==m)
	{printf("its possible");
	}
	else{printf("its not");
	}
   
}
