#include<stdio.h>
#include<string.h>

int reverse(char string[]);

int main(){
    char input[50];
    printf("Enter a string: ");
    scanf("%s", input);

    reverse(input);
}
int reverse(char string[]){
    int length =0;

    length = strlen(string);
    for(int i = length; i >= 0; i--){
        printf("%c",string[i]);
    }
}