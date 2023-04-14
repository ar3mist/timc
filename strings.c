#include<stdio.h>
#include<string.h>

int main(){
    // the use of string length
    char myname[10] = "ROHITH";
    char name[10] = "ROHITH";
    printf("The Length of the string is %ld\n",strlen(myname));

    //the use of string concatenation
    char dream[50] = "Continental GT 650";
    char motivation[50] = " I will have it one day The ";
    char truth[100];
    printf("The truth is %s\n",strcat(motivation,dream));
    printf("The truth is %s\n",motivation);
    // the use of string copy
    char life[50];
    stpcpy(life,motivation);
    printf("%s\n",life);

    //the use of string compared
    // if it matches it will return 0 
    printf("The comparision of dream and motivation is %d\n",strcmp(dream,motivation));
    printf("The comparision of myname  and name is %d\n",strcmp(name,myname));

}