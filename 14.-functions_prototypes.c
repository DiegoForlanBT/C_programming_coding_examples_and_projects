#include <stdio.h>
#include <string.h>

void hello(char name[] , int age);//FUNCTION PROTOTYPE


int main(){
    
    char name[50] ;
    int age ;
    
    // user enters the name (we are taking the input)
    printf("Enter your name : ");
    fgets(name, sizeof(name) , stdin);
    name[strlen(name)-1]='\0';
    
    // user enters age variable (we are taking the integer input)
    printf("Enter your age : ");
    scanf("%d",&age);

    hello(name,age);    
    
    return 0;
}

void hello(char name[] , int age) {
    printf("Hello %s .\n",name);
    printf("You are %d years old .",age);
}
