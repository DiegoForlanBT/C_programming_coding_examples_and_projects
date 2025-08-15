#include <stdio.h>
int main(){
    
    double num1;
    double num2;
    char op;
    
    printf("Please enter the first number : ");
    scanf("%lf",&num1);
    
    printf("Please enter the second number : ");
    scanf("%lf",&num2);
    
    printf("Please enter op character : ");
    scanf(" %c",&op);
    
    
    switch(op){
        case '+' : printf("Result : %.2lf",num1+num2); break;
        case '-' : printf("Result : %.2lf",num1-num2); break;
        case '*' : printf("Result : %.2lf",num1*num2); break;
        case '/' : 
        if(num2==0){
            printf("Invalid value !!!"); break ;
        }else{
            printf("Result : %.2lf",num1/num2); break;
        }
        default :  printf("You entered wrong char.");
        
    }
    
    
    
    
    return 0;

}
