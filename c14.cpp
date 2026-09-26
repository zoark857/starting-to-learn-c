#include<stdio.h>

int main(){
    
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if(age >= 75){
    printf("you are a senior citizen");
    }
    else if(age >= 18){
    printf("you are an adult");
    }
    else if(age < 18){
        printf(" you are an child");
    }
    else if(age == 0){
        printf("you have just born");
    }
    else{
        printf("you have just born");
    return 0;
}

}