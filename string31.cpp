#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{ char a[15];int l=0;char temp;
printf("enter the string word:(one line with full stop):\n");
gets(a);int y;
int n=strlen(a); int i,j;
for(i=0;i<n;i++)
{ y=a[i];
if(isdigit(a[i])>0){printf("string is invalid\n"); l=1;break;
}
}
if(l==0)
{ for(i=0;i<n/2;i++)
{temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}printf("%s",a);
}
}

