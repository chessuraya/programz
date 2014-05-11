#include <stdio.h>


int fileIO (){
FILE *filin;
int i;
if ((filin=fopen("asd.txt","r"))==NULL)
    printf("file not found");
    else{
            int x;
            while ((x=fgetc(filin))!=EOF)
            {
                printf("%c %d\n",x,x);
               // printf("%d\n",x);
    }
    }
fclose(filin);
};
