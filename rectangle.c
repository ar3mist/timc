#include<stdio.h>
int main(){
    float length;
    float breath;
    float area;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breath of the rectangle: ");
    scanf("%f",&breath);
    area = length * breath;
    printf("The area of the rectangle is : %.2f\n",area);
    return 0;

}