#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char club[50];
    float salary;
    char symbol;
    bool isRetired;
    bool alive;  
} sportPlayer;

void playerInfo(sportPlayer human){
    printf("Name : %s\n", human.name);
    printf("Age : %d\n", human.age);
    printf("Club : %s\n", human.club);
    printf("Salary : %.2f %c\n", human.salary, human.symbol);
    printf("Is retired : %s\n", (human.isRetired) ? "Yes" : "No");
    printf("Is alive   : %s\n", (human.alive) ? "Yes" : "No");
    printf("\n");
}

int main(){
    sportPlayer Lebron = {"Lebron James" , 39 , "Los Angeles Lakers" , 52630000.00 , '$' , false , true};
    sportPlayer Armando = {"Diego Armando Maradona" , 60 , "SSC Napoli" , 10000000.00 , '$' , true , false};
    
    playerInfo(Lebron);
    playerInfo(Armando);
    
    
    sportPlayer Nadal ;
    
    strcpy(Nadal.name , "Rafael Nadal");
    strcpy(Nadal.club , "Spain Natioanl Team");
    Nadal.age = 41 ;
    Nadal.salary = 15750900.00 ;
    Nadal.symbol = '$';
    Nadal.isRetired = false ;
    Nadal.alive = true ;
    
    playerInfo(Nadal);
    
    
    
    return 0;
}
