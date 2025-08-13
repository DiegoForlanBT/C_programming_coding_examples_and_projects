#include <stdio.h>
#include <stdbool.h>


bool ageCheck(int age){

    if(age>=18){
        return true ;
    }else{
        return false ;
    }
    
}


int main(){

int age;    
printf("Please enter your age : ");
scanf("%d",&age);



if(ageCheck(age)){
    printf("You are an adult");
}else{
    printf("You are a child.");
}

    
    return 0;
}
