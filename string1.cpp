#include<stdio.h>
int main()
{ char a[50];int x,l=0;
printf("enter the string (note only one space allowed between words):\n");
gets(a);int i=0;
while(a[0]>0){
if(a[i]!='\0'){l=l+1;++i;
}
else{ if(a[i+1]!='\0'){l=l+1;++i;
}
else{break;
}
}

}
printf("lenth of string is %d",l);
}
