#include<stdio.h>
#include<math.h>
#include<string.h>
int max(int x, int y)
{if(x>y){return x;
}
else{return y;
}
}
int main()
{ char a[50],b[50];int i,z;
printf("enter the reference string(1)\n");
gets(a);
printf("enter the array to  be copied on string (1)\n");
gets(b);
 int x=strlen(a);
 int y= strlen(b); 
if(max(x,y)==x)
{z=y;
}
else{z=x;
}
for(i=0;i<z;i++)
{a[i]=b[i];
}
printf("%s",a);
}
