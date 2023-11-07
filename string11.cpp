#include<stdio.h>
#include<string.h>
int main()
{int i,j,l=0;char a[50];
char c;
printf("enter the string :\n");
gets(a);
int y=a[0];
if(y>=97)
{y=y-32;a[0]=y;
}
printf("%s",a);}
