#include<stdio.h>
int main(){
    int minutes;
    int years,minutes_in_year,days;
    printf("Enter the number of minutes: ");
    scanf("%d",&minutes);
    minutes_in_year = (24*60*365);
    printf("Total minutes in the in one year is : %d\n",minutes_in_year);
    days = (minutes/60)/24;
    years = minutes/minutes_in_year;
    printf("The days: %d\n",days);
    printf("The years: %d\n",years);

    return 0;
} 