/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void happyBirthday(char name[50] , int age){
    printf("Happy birtday to you !\n");
    printf("Happy birtday to you !\n");
    printf("Happy birtday dear %s ",name);
    printf("You are %d years old .\n",age);
    printf("Happy birtday to you !\n");
    
    
}

int main(){

int age ;
char name[50];


printf("Please enter your name : ");
fgets(name , sizeof(name) , stdin);
name[strcspn,'\n']='\0';

printf("Please enter your age : ");
scanf("%d",&age);

happyBirthday(name , age);

return 0;
}
