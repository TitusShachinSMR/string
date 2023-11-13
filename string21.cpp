#include<stdio.h>
#include<string.h>
int main()
{ char a[500];int l=0;
printf("enter the string:(one line without fullstop)");
gets(a);
int n=strlen(a);int min=n,i;
for(i=0;i<n;i++)
{ int x=a[i];
 if(x==32||x==0)
 { if (min>l){ min=l;}
  l=0;	 }
   else{
   	 l=l+1;	}
}
printf("min lenght=%d\n",min);int max=0;
for(i=0;i<n;i++)
{ int x=a[i];
 if(x==32||x==0)
 { if (max<l){ max=l;}
  l=0;	 }
   else{
   	 l=l+1;	}
}
printf("max lenght=%d",max);


}

