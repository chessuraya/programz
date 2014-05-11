#include <stdio.h>
void permute(){
FILE *f;
f=fopen("asd.txt","w+");
int x=0;
char a;
while ((a=getche())!=' ')
    fputc(a,f);
fclose(f);
}

void stringing(){
char *x=NULL,*y=NULL;
int len=0;
int a;
while ((a=fgetc(stdin))!='\n'){
x=realloc(y,1);
y=x;
y[len]=a;
printf("%c",y[len++]);
}
fputc((int)y[0],stdout);
fputc((int)y[--len],stdout);
}
