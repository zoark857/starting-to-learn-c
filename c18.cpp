#include<stdio.h>

int main(){

//  Temperatur converter program //

char choice = '\0';
float fahernheit = 0.0f;
float celsius = 0.0f;

printf("Temperature conversion program");
printf("C celsius to fahernite");
printf("F fahernite to celsius");
printf("in what unit is temperatur celsius(C) or faherntie(F)?: ");
scanf(" %c", &choice);

if (choice == 'C'){
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
   fahernheit = (celsius * 9/5) + 32;
   printf("Temperature in fahernheit: %.2f\n", fahernheit); 

}else if (choice == 'F'){
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahernheit);
   celsius = (fahernheit - 32) * 5/9;
   printf("Temperature in Celsius: %.2f\n", celsius);
}
else{
    printf("Invalid choice");
}
return 0;
}