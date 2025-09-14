#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int id,amount;
    char ans;
    bool yes = true;
    bool no = false;
   
    printf("\nEnter you ID number: ");
    scanf("%d",&id);

    if(id == 2001){
      printf("\nHello Emmanuel");
      printf("\nYour balance is $480");
    };
    if(id == 2002){
      printf("\nHello Siraj");
      printf("\nYour balance is $380");
    };
    if(id == 2003){
      printf("\nHello Jamie");
      printf("\nYour balance is $590");
    };
    if(id == 2004){
      printf("\nHello Brian");
      printf("\nYour balance is $590");
    };
    if(id == 2005){
      printf("\nHello Emmanuel");
      printf("\nYour balance is $480");
    }
    

    printf("\nWould you like to withdraw? ");
    scanf("%s",&ans);

    if(ans == yes){
        printf("\nOkay have a nice day");
        
    }
    else if(ans == no ){

        printf("\nHow much would you like to Withdraw? ");
        scanf("%d",&amount);

        printf("$%d has been withdrawn, Have a nice day",amount);
        
    }
    

    return 0;
}