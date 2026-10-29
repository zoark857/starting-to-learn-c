#include<stdio.h>
bool age_check(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age_check(age)){
        printf("You are eligible to vote.\n");
    }
    else{
        printf("You are not eligible to vote.\n");
    }
    return 0;
}