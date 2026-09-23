#include<stdio.h>
#include<math.h>

int main(){
    
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);


    area = PI * pow(radius, 2);
    printf("the area of the circle is: %.2lf", area);
    return 0;
}