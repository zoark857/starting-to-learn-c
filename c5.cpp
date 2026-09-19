#include<stdio.h>

int main(){
// format specifier = specil tokens that begin with % symbol use to how computer interprets the data

int age = 25;
float price = 19.99;
double pi = 3.141592;
char currency = '$';
char name[] = "Ayush";

printf("%d\n", age);
printf("%f\n", price);
printf("%lf\n", pi);
printf("%c\n", currency);
printf("%s\n", name);

// optional modifiers like(weight, precision, flags)//

int num1 = -1;
int num2 = 10;
int num3 = -100;

printf("%-3d\n", num1);
printf("%+3d\n", num2);
printf("%+3d\n", num3);

float num4 = -19.99;
float num5 = -20.01;
float num6 = 21.3;

printf("%_.2f\n", num4);
printf("%-.2f\n", num5);
printf("%-.2f\n", num6);
    
    
    

return 0;


}
