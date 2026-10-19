#include<stdio.h>
#include<string.h>

void HappyBirthday(char name[]){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you\n");
}
int main(){

    char name[50] = ""; 
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character from the input
   
   HappyBirthday(name);
    return 0;
}