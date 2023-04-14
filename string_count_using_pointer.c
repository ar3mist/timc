#include<stdio.h>


int string_count(const char string[]);
int main(){

printf("%d\n",string_count("rohith"));

}

int string_count(const char string[]){

    const char *lastaddress = string;

    while (*lastaddress){

        *lastaddress++;
         
    }
    return lastaddress - string;
}