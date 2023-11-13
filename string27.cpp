#include<stdio.h>
#include<string.h>
int main()
{ char a[500];int l=0;
printf("enter the string:(one line without fullstop):\n");
gets(a);
int n=strlen(a); int i,j;
for(i=0;i<n;i++)
{int x=a[i];
if((x>=65&&x<=90)||(x>=97&&x<=122)||a[i]==' '||a[i]=='\n')
{
}
else{printf("it is not pandrom  ");break;
}
}}
