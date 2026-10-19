#include<stdio.h>

int main(){
int a,b;
char op;
printf("Enter your no: ");
scanf("%d %d", &a, &b);
printf("Enter your operator: ");
scanf(" %c", &op);

switch (op)
{
case '+': printf("%d", a + b);
    break;
case '-': printf("%d", a - b);
    break;
case '*': printf("%d", a * b);
    break;
case '/':
  if(b == 0){ 
        printf("invalid input");} 
   else{
        printf("%d", a / b);}
    break;
case '%': printf("%d", a % b);
    break;
default: printf("invalid input");
    break;
}
return 0;
    
}