#include<stdio.h>

int main(){

    // variables are containers that behave asvalue stored in them //
    
    // I used integers function //

    int age = 25.5;
    int years = 2026;
    int quantity = 1;

    printf("you are %d years old\n", age);
    printf(" %d is present year\n ", years);
    printf("you have ordered %d\n", quantity);


    // I used float function//

    float gpa = 4.5;
    float price = 19.99;
    float temp = 25.0;

    printf("your gpa is %.1f\n", gpa);
    printf("the price is %.2f\n", price);
    printf("the temperatur of water is %.1f\n", temp);

    // I used double function //

    double pi = 3.14;
    double e = 2.71;

    printf("the value of pi is %.2lf\n", pi);
    printf("the value ofe is %.2lf\n", e);

    // I used char function//
    char grade = 'A';
    char symbol ='@';
    char currency ='$';
    char name[] = "Ayush singh";
    char sweets[] = "milkcake";
    
    
    printf("your grade is %c\n", grade);
    printf("your symbol is %c\n", symbol);
    printf("my favourite currency is %c\n", currency);
    printf("hello %s\n", name);
    printf("my favourite sweets are %c", sweets);


    return 0;



}