#include<stdio.h>
#include<string.h>
int main()
{int i,j,l=0;char a[50];
printf("enter the string :\n");
scanf("%s",a);
int x=strlen(a);printf("vovels:\n");
for(i=0;i<x;i++)
{if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
 {printf("%c\n",a[i]);
 }

}
}
