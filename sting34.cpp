#include<stdio.h>
#include<string.h>
int main()
{ char a[30];int i,j,k;
gets(a);int n=strlen(a);
for(i=1;i<=n;i++)
{for(j=0;j<=n-i;j++)
{for(k=j;k<i+j;k++)
{printf("%c",a[k]);
}printf("\n");
}
}
	
	
}
