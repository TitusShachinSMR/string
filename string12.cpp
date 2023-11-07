#include<stdio.h>
#include<string.h>
int main()
{ int i,j,l=0;int min=50,max=0;
char a[50],min_el,max_el;
printf("enter the string:\n");
gets(a);
int n= strlen(a);
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ if(a[i]==a[j]&&a[j]!='#')
{a[j]='#';l=l+1;
}
}if(a[i]!='#')
{if(l+1>max){max=l+1;max_el=a[i];
}
if(l+1<min){min=l+1;min_el=a[i];
}
}l=0;
}
printf("max element %c of frequency %d\n min element %c of frequency %d\n",max_el,max,min_el,min);
}
