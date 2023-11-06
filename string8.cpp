#include<stdio.h>
#include<string.h>
int main()
{int i,j,l=0;char a[50],b[50];
printf("enter the string :\n");
scanf("%s",a);
int x=strlen(a);
for(i=x-1;i>=0;i--)
{ b[i]=a[x-1-i];
}
for(i=0;i<x;++i)
{if(a[i]==b[i]){l=l+1;
}}
if(l==x){printf("it is palindrome");
}
else{printf("it is not palindrome");
}
}

