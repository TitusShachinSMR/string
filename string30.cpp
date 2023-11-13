#include<stdio.h>
#include<string.h>
int main()
{ char a[500];int l=0;
printf("enter the string word:(one line with full stop):\n");
gets(a);int y;
int n=strlen(a); int i,j;
if(n==0)
{printf("-1");
} 
else{  for(i=n-2;i>=0;i--)
{ if(a[i]==' '){ y=i;break;
}
}
}
for(i=y+1;i<=n-2;i++)
{printf("%c",a[i]);
}
}

