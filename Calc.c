#include<stdio.h>
#include<math.h>

int main(){
    float a,b;
    printf("This is n Area of a circle calc");
    printf("\nEnter your Radius: ");
    scanf("%f",&a);

    b = 3.142 * (a*a);

    printf("Your area is %.2f",b);

   return 0;
};