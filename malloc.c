#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char *str = NULL;

    str = (char*)malloc(2 *sizeof(char));
    strcpy(str,"r");

    printf("%s\n",str);

    free(str);

    printf("%s\n",str);



}