#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // to generate the random number by using rand
    int random_number;
    int guess;
    time_t t;
    srand((unsigned) time(&t));
    random_number = rand() % 21;

    printf("This is a guessing game !!\n");
    printf("I have chosen a number between 0 and 20. Now you must guess the number:\n");
    printf("\n");
    //printf("The random_number are : %d\n",random_number);
    for(int i = 10;i>=0;i--){
        printf("You have %d tries left\n",i);
        printf("Enter the guess: ");
        scanf("%d",&guess);
        printf("\n");

        if(guess == random_number){
            printf("you guessed correctly:\n");
            printf("The random number was %d\n",random_number);
            break;      
            }
        else if (guess<random_number){   
            printf("Sorry,%d is wrong.random number is less than your guess\n",guess);
            printf("\n");
        }
        else if (guess>random_number){
            printf("Sorry,%d is wrong.random number is greater than your guess\n",guess);
            printf("\n");
        }
        else{
            printf("better luck next time\n");
        }
    }
    return 0;

}