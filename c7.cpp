#include<stdio.h>
#include<string.h>

int main(){
    
    // user input //

    int age = 0;
    float cgpa = 0.0f;
    char grades = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("Enter your grade: ");
    // due to input buffer i left space before %
    scanf(" %c", &grades);

    // using fegets becuse scanf does not read white //
    getchar(); // to clear the input buffer before reading string input
    printf("Enter your name: ");
    fgets( name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0'; // to remove the newline character from the string

    printf("%d\n", age);
    printf("%.2f\n", cgpa);
    printf("%c\n", grades);
    printf("%s\n", name);

    return 0;
}