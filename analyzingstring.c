#include<stdio.h>   
#include<string.h>
#include<ctype.h>

int main(){
    char input[30];
    int letters=0;
    int digits=0;
    int punctuations=0;
    printf("Enter a string so that I can tell u how many alphabets,number,special character: ");
    scanf("%s",input);
     
    int i=0;
    while(input[i]){
        if(isalpha(input[i]))
            letters++;
        else if (isdigit(input[i]))
            digits++;
        else if(ispunct(input[i]))
           punctuations++;
        i++;
    }
    printf("The number of letters : %d\n",letters);
    printf("The number of digits : %d\n",digits);
    printf("The number of punctuations: %d\n",punctuations);
}
