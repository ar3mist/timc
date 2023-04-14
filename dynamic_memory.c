#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *string = NULL;
    int size;
    printf("Enter the size of the memory should be allocated: ");
    scanf("%d",&size);

    string = malloc(size * sizeof(char));

    printf("Enter the string as you wish: ");
    scanf("%s",string);


    printf("In this address: %p The string is located : %s\n",&string,string);

    free(string);

}