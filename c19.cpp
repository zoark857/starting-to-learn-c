#include<stdio.h>

int main(){

    // A program to show if else statemet//

    int DayOfTheWeek = 1;
    if(DayOfTheWeek == 1){
        printf("Today is monday");}
    else if(DayOfTheWeek == 2){
        printf("Today is tuesday");
    }
    else if(DayOfTheWeek == 3){
        printf("Today is wednesday");
    }
    else if(DayOfTheWeek == 4){
        printf("Today is thursday");
    }
    else if(DayOfTheWeek == 5){
        printf("Today is friday");
    }
    else if(DayOfTheWeek == 6){
        printf("Today is saturday");
    }
    else if(DayOfTheWeek == 7){
        printf("Today is sunday");
    }
    else{
        printf("Invalid day of the week");
    }
}