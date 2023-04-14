#include<stdio.h>

int global = 13;
int main(){

    int input = 10;
    int input2 = 12;
    int *pointer = NULL;
    pointer = &input;


    printf("The value of the input is : %d\n",input);
    printf("The value of the input2 is : %d\n",input2);
    printf("The address of the input2 is : %p\n",&input2);
    printf("The address of the input is : %p\n",&input);
    printf("The value of the pointer is : %p\n",pointer);
    printf("The value of the pointer is : %d\n",*pointer);
    printf("The address of the pointer is : %p\n",&pointer);

printf("The value of the global is : %d\n",global);
printf("The address of the global is : %p\n",&global);

} 