#include<stdio.h>
#include<string.h>
int main()
{ char a[50],b[50];int l=0;
printf("enter string one:");printf("\n");
scanf("%s",a);
int n=strlen(a);
printf("enter string two:");printf("\n");
scanf("%s",b);
int m=strlen(b);
int i,j;
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{if(a[i]==b[j]){l=l+1;}
}
}
if(l==m&&l==n)
{printf("they are anogram\n");
}else{printf("the are not anogram\n");
}

}
