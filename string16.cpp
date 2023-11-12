#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{char a[500];int c=0,l=0,v=0,w=0;
printf("enter the string\n");
gets(a);int n=strlen(a);

for(int i=0;i<n;i++)
{if(isdigit(a[i])>0){l=l+1;}
if(a[i]==' '){w=w+1;
}if(isalpha(a[i])>0){

if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'
&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'){c=c+1;
}
else{v=v+1;
}}
}
printf("space %d  digit %d  consonant %d vowel %d",w,l,c,v);
}
