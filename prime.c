#include<stdio.h>

int main(){
    printf("Enter a number: ");
    int num,count;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("It is a prime number:");
    }else{
        printf("It is not a prime number:");
    }
    return 0;
}