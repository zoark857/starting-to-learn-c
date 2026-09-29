#include<stdio.h>

// WEIGHT CONVERTER PROGRAM

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Converter Calculator\n");
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){

        printf("Enter weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("Weight in Pounds: %.2f\n", pounds);
    }
    else if(choice == 2){
        printf("Enter weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 0.453592;
        printf("Weight in Kilograms: %.2f\n", kilograms);
    }
    else{
        printf("Invalid choice");
    };

    return 0;





}
