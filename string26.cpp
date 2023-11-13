#include<stdio.h>
#include<string.h>
int main()
{ char a[500];int l=0;
printf("enter the string:(one line without fullstop):\n");
gets(a);
int n=strlen(a); int i,j;
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ if(a[i]==a[j]&&a[i]!='&')
{l=l+1;a[j]='&';
}
}
if(l==0&&a[i]!='&')
{printf("first non repeating element is %c",a[i]);break; 
}l=0;
}}
