#include <stdio.h>
#include <strbool.h>
int main(){

    int num = 0;
    printf("Please enter a number : ");
    scanf("%d",&num);
    
    if(num>0){
        if(num%2==0){
            printf("%d is a positive and even number." , num);
        }
        else{
            printf("%d is a positive and even number." ,num);
        }
    }
    else if(num<0)
    {
        if(num%2==0){
            printf("%d is a negative and even number.",num);
        }else{
            printf("%d is a negative and odd number.",num);
        }
    }
    else{
        printf("Your number '%d' eqaul to zero :",num);
    }

  
  return 0;
}
