#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{char a[500];int y1,y2;
printf("enter the string\n");
gets(a);int n=strlen(a);
for(int i=0;i<n-1;i++)
{for(int j=0;j<n-i-1;j++)
{int y1=a[j],y2=a[j+1];
if(y1>y2){a[j]=y2;a[j+1]=y1;
}
}
}
printf("%s",a);}
