#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("enter string");
	gets(a);
	int n=strlen(a);
	int i,l=0;;
	for(i=0;i<n;i++)
	{ if(a[i]==' ')
	{l=l+1;
	}
	}
	printf("number of words=%d",l+1);
	
	
}
