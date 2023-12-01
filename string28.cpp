#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{  int i,j;
	char a[40];
	char b[50];
	printf("enter string 1\n");
	gets(a);
	printf("enter string 2\n");
	gets(b);
	int n=strlen(a);
	int m=strlen(b);
	if(n!=m)
	{ printf("it is not isomorphic");
	exit(1);
	}
	for(i=0;i<n;i++)
	{ for(j=i+1;j<n;j++)
	{ if(a[i]==a[j]&&b[i]!=b[j]||a[i]!=a[j]&&b[i]==b[j])
	{printf("it is not isomorphic");
	exit(1);
	}
	}}
	printf("it is isomorphic");
	
	
	
}
