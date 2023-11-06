#include<stdio.h>
#include<string.h>
int main()
{ int i,j;
char a[50];
printf("enter the string (in lower case or upper)");
gets(a);
int x=strlen(a);
for(i=0;i<x;i++)
{ int y=a[i];
if(y>=97){ y=y-32;a[i]=y;
}
else{y=y+32;a[i]=y;
}
}
printf("%s",a);
}
