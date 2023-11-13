#include<stdio.h>
#include<string.h>
int main()
{ char a[500];int l=0;
printf("enter the string:(one line without fullstop):\n");
gets(a);
int n=strlen(a); int i,j;
for(i=0;i<n;i++)
{if(a[i]!=' '){printf("%c",a[i]);
}
}}
