#include <stdio.h>
int main(){

  // logical operators = used to combine or modify boolean expression 
  // && = AND
  // || = OR
  // ! = NOT

     int age ;
    int financialIncome ;

    
    printf("Please enter your : ");
    scanf("%d",&age);
    
    printf("Please enter financial income : ");
    scanf("%d",&financialIncome);

 
        if(age>=18 && financialIncome>=10000){
            printf("Your credit application has been approved.");
        }
        else if(age<18 || financialIncome<5000){
            printf("Your credit application has benn declined.");
        }else{
            printf("Additional documentation required.");
}


  return 0;
}
