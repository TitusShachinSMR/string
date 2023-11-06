#include<stdio.h>
#include<string.h>
int main()
{ char a[50],b[50];int i,z;
printf("enter the reference string(1)\n");
gets(a);
printf("enter the array to concat on string (1)\n");
gets(b);
int x= strlen(a);
int y= strlen(b);
char c[x+y];int t=0;
for(i=0;i<x;i++)
{ c[t]=a[i];t++;
} t=x;
for(i=0;i<y;i++)
{c[t]=b[i];t++;
}
printf("concat=%s",c);}
