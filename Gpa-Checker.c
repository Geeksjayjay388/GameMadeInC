#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    float GPA;

    printf("\nThis is a GPA Allocator");
    printf("\nEnter Your Gpa: ");
    scanf("%f",&GPA);

    if(GPA<3.0){
        printf("\nYou were allocated to Lower class");
        printf("\nYou will not graduate");
    }
    else if(GPA>=3.0){
        printf("\nYou were allocated to Upper class");
        printf("\nYou will soon graduate");
    }
    else{
        printf("\nInvalid Input");
    }

   return 0;

}