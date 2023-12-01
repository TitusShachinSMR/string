#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{   char a[30];
    gets(a);
    int i,j,l=0,n=strlen(a);
    for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++)
    {if(a[i]==a[j]&&a[i]!='#')
    { l=l+1;a[j]='#';
	}
	}
	if(a[i]!='#'&&(l+1)!=(toascii(a[i])-96))
	{ printf("its not super ascii");exit(1);
	}l=0;
	}
	printf("it is super ascii");
}
