#include<stdio.h>

int main(){
    // artimetic operations (+,-,%,*,/) //

    int a = 2;
    int b = 5;
    int c = 6;

    c = a + b;
    printf("%d", c);
    c = a - b;
    printf("%d", c);
    c = a * b;
    printf("%d", c);
    b = c / a;
    printf("%d", b);
    b = c % a;
    printf("%d", b);
    
    a++;
    printf("%d", a);
    b--;
    printf("%d", b);
    a += 3;
    printf("%d", a);
    b -= 2;
    printf("%d", b);
    c/2;
    printf("%d", c);
    c*2; 
    printf("%d", c);


    return 0;
}