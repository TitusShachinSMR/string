#include<stdio.h>
#include<string.h>
int main()
{char a[500];
printf("enter the string\n");
gets(a);int n=strlen(a);

for(int i=0;i<n;i++)
{if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'
&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'){printf("%c",a[i]);
}
}
}
