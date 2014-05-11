#include <stdio.h>
#include <time.h>
#include <ctype.h>
/*
void getpuzzle(FILE *input, int *q, int *p){
    int x;
    char **tmp=NULL,**cont=NULL;
    char *store=NULL,*store2=NULL;
    int a=0,b=0,c=0;
    tmp=(char**)malloc(1);
    printf("  ");
    while (((x=fgetc(input))!='#')&&(x!='$')){
        store=(char*)realloc(store2,1);
        store[b++]=x;
        store2=store;
        if (x=='\n'){
            tmp[a]=store2;
            cont=tmp;
            tmp=(char**)realloc(cont,1);
            a++;
            c=b;
            b=0;
            cont=tmp;
        }
    }
printf("GOT HERE");
}

char* getsubstring(FILE *input, int *subsize, char*value){ //memleaks. solve.
    printf("GOT HERE");
    char *temp=NULL,*cont=NULL;
    *subsize=0;
    int x,len=0;
    while ((x=fgetc(input))!='\n'){
temp=realloc(cont,1);
free(cont);
temp[len++]=x;
cont=temp;
free (temp);
    }
    printf("GOT HERE");
    *subsize=len;
    free(temp);
    value=cont;
    free (cont);
    return value;
}

int getN(FILE *input){
    int x;
return x=fgetc(input);
}

*/
void ending(){
FILE *p=fopen("048_week1.txt","w");
fprintf(p,"Was working.. then randomly crashed then gg. got stuck.\nIf anyone is reading this.. please tell my parents I love them.\nAlways-Bon Jovi. PS Brito,Gerick,Tantengco.\nNetworklabs  =1\nTeam Drangons=0");
printf("\nNext year uli! Team Drangons 2.0");
fclose(p);
}
int processs(char* s,int ssize,char **a,int b,int c){
}

int main(){
FILE *input;
input=fopen("week1.txt","r");
char **tmp;
int z,n,i;
char b=' ', *substring;
int subsize;
int x=0,y=0;
int *value;
value = malloc(0);
/*
while (((z=fgetc(input))!='$')&&(z!=EOF)){
if (z=='='){ //GET SUBSTRING N NUMBER
if (b=='s'){
//substring= getsubstring(input,&subsize,value);
free(substring);
}
else{
//n=getN(input);
free(substring);
}
}
b=z;//store previous char in b
}
*/
printf("Networklabs  =1\n");
printf("Team Drangons=0");
fclose(input);
ending();
getch();
return 1;
}


