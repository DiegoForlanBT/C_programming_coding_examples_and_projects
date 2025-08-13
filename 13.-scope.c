#include <stdio.h>

int addition(int x , int y){
    int result = x + y ; // local scopes , int x and int y
    return result ;
}

int subtraction(int x , int y){
    int result = x - y ; // local scopes , int x and int y
    return result ;
}


int main(){
    
    
    int x , y ; // local scope , int x and int y
    printf("Enter the value of x : ");
    scanf("%d",&x);
    
    printf("Enter the value of y : ");
    scanf("%d",&y);
    
    int  result1 = addition(x,y);
    printf("Addition result : %d\n",result1);
    
    
    int result2 = subtraction(x,y);
    printf("Substraction : %d",result2);
    
    
    return 0;
}
