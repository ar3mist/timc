#include<stdio.h>
#include<stdbool.h>

bool string_comp(const char string1[],const char string2[]);
int main(){
    char input1[50];
    char input2[50];
    printf("Enter the first string: ");
    scanf("%s",input1);
    printf("Enter the second string: ");
    scanf("%s",input2);
    
    printf("IF it returns 1 the strings are equal ^*^ 0 means not equal ====>> %d\n",string_comp(input1,input2));

}

bool string_comp(const char string1[],const char string2[]){

    int i =0;
    bool isequal = false;

    while(string1[i] == string2[i]
        && string1[i]!= '\0'
        && string2[i]!= '\0')

    i++;

    if(string1[i] == '\0' && string2[i] == '\0'){
        isequal = true;
    }
    else{
        isequal = false;
    }
    return isequal;
}