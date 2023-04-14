#include<stdio.h>

// this is a function for checking and return the length of the given string
int string_length(const char string[]);

int main(){
    char input[50];

    printf("Enter a string: ");
    scanf("%s",input);

    printf("The length of the given string is %d",string_length(input));



}

int string_length(const char string[]){

    int  length = 0;
    while(string[length]!= '\0'){
        length++;
    }
    return length;
}
