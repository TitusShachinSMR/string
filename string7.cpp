#include<stdio.h>
#include<string.h>
int main()
{int i,j,l=0;char a[50],b[50];
printf("enter the string 1:\n");
scanf("%s",a);
printf("enter the string 2:\n");
scanf("%s",b);
int x=strlen(a);
int y=strlen(b);
if(x!=y){printf("it is not same string");
}
else{ for(i=0;i<x;i++){if(a[i]==b[i]){l=l+1;}}
  if(l==x){printf("it is same string:");
  }
  else{printf("it is not same string");
  }}
}
