#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int computer(){
    return rand()%3 + 1;
}

int guess(){
    printf("Select 1 for rock. \n");
    printf("Select 2 for paper. \n");
    printf("Select 3 for scissors. \n");
    
    int num; 
    printf("Enter for starting value : ");
    scanf("%d",&num);
    
    while(num<1 || num>3){
        
        printf("Please enter again the number : ");
        scanf("%d",&num);
    }
    
    return num ;
    
}




int main(){
    srand(time(NULL));
    
    
    int gamer = guess();
    int decide = computer();

//1-rock , 2-paper , 3-scissors

if(gamer == decide ){
    printf("It's draw!");
}else if( (gamer == 1 && decide ==3) || (gamer==2 && decide==1) || (gamer==3 && decide==2) ){
    printf("You win");
}else{
    printf("You lost");
}




    
    return 0;
}
