#include<stdio.h>
#include<stdbool.h>

int main(){
    float price = 10.00;
    bool IsStudent = true;
    bool IsSenior = true;

 if (IsStudent)
 {
    if(IsSenior)
    {
        printf("The student discount is 10%\n");
        printf("The senior discount is 20%\n");
       price *= 0.7;
    }
    else{
      printf("The student discount is 10%\n");
      price *= 0.9;
    }

    
 }
else{
printf("The senior discount is 20%\n");
}
printf("The price is:%.2f", price);
 return 0;
    
}