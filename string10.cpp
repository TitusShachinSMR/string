#include<stdio.h>
#include<string.h>
int main()
{int i,j,l=0;char a[50];int y;
char c;
printf("enter the string :\n");
gets(a);
int x=strlen(a);
char b[x+1];
for(i=0;i<x;i++)
{ b[i]=a[i];
} 

printf("enter the character to insert:\n");
scanf("%c",&c);
printf("enter the position to insert:\n");
scanf("%d",&y);
for(i=x-1;i>=y-1;i--)
{b[i+1]=b[i];
}
b[y-1]='c';
for(i=0;i<x+1;i++)
{printf("%c",b[i]);
}}
