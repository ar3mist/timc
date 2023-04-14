#include<stdio.h>

int add(int x,int y){
    int result;

    result = x +y;
    printf("The sum of these numbers are: %d\n",result);


}
int main(){
    int value1,value2;

    printf("Enter the first value: ");
    scanf("%d",&value1);
    printf("Enter the second value: ");
    scanf("%d",&value2);

    add(value1,value2);
    return 0;
     
}