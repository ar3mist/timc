#include<stdio.h>

int square(int *input);

int main(){

    int number  = 4;
    printf("The square of the number is :%d\n",square(&number));
}

int square(int *input){

    *input = (*input) *  (*input);

    //sreturn *input;


}