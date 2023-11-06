#include<stdio.h>
#include<string.h>
int main()
{ int i,j;char temp;
char a[50];
printf("enter the string");
gets(a);
int x=strlen(a);
for(i=0;i<x/2;i++)
{temp=a[i];
a[i]=a[x-i-1];
a[x-i-1]=temp;
}
printf("revese=%s",a);

}
