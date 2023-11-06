#include<stdio.h>
#include<string.h>
int main()
{ int i,j,l=0;
char a[50],t;
printf("enter the string\n");
gets(a);
printf("enter the character:\n");
scanf("%c",&t);
int n=strlen(a);
for(i=0;i<n;i++)
{if(a[i]=='t'){l=l+1;}}
if(l>0){printf("the character is present\n");}
if(l==0){printf("character is not present\n");}

}

