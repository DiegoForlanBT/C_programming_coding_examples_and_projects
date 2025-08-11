/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <string.h>
#include <stdio.h>

void happyBirthday(char name[] , int age){
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you ");
    printf("\nHappy birthday dear %s!",name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old \n ",age);

}



int main()
{
    char name[] = "";
    int age = 0;
    
    printf("Enter your name : ");
    fgets(name , sizeof(name) , stdin);
    name[strlen(name)-1]='\0';
    
    printf("\nEnter your age : ");
    scanf("%d",age);
    
    happyBirthday(name ,age);

    return 0;
}
