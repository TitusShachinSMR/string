#include<stdio.h>
#include<string.h>
int main()
{ char a[500];int l=0;
printf("enter the string:(one line without fullstop):\n");
gets(a);
int n=strlen(a);int i;
for(i=0;i<n;i++)
{int y=a[i];
if(y>=65&&y<=90)
{ printf("first capital letter is %c",a[i]); break;
}
}}

