#include <stdio.h>
#include <stdbool.h>

int main(){
    
    bool isContinue = true ;
    char choice = '\0';


while(isContinue){
    printf("Do you wanna still play the game (make a choice Yes:'Y' or No:'N' ) : ");
    scanf("%s",&choice);
    
    if(choice == 'N' || choice == 'n' ){
        isContinue = false ;
    }
    else if(choice == 'y' || choice == 'Y') {
        isContinue = true ;
    }
    else {
        printf("Restart aganin , make a choice .\n");
        isContinue = true;
    }
}    
    
    return 0;
}
