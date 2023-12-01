#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("enter string");
	gets(a);int l=0;
	int n=strlen(a);
	int i;
	for(i=0;i<n-2;i++)
	{ if((a[i]=='t'||a[i]=='T')&&(a[i+1]=='h'||a[i+1]=='H')&&(a[i+2]=='E'||a[i+2]=='e')&&a[i+3]==' ')
	{ l=l+1;
	}
	}
	printf("number of 'the'=%d",l);}
