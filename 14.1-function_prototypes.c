#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age); // This is age
// Function prototype example
// You must declare your function parameters and data types in the scope of the main function.
int main(){
    
    int age ;
    printf("Please enter your age : ");
    scanf("%d",&age);
    
    if(ageCheck(age)){
        printf("You are an adult .");
    }else {
        printf("You are  a child .");
    }
    
    return 0;
}

bool ageCheck(int age){
    if(age>=18){
        return true ;
    }else{
        return false ;
    }
}
