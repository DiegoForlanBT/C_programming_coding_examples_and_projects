#include <stdio.h>

void showMoney(int x){
    printf("\nYour current balance : %d .\n",x);
}

int plusMoney(int x ,int z){
    return x = x +z ;
}

int minusMoney(int x , int y){
    return x = x - y;
}


int main(){

    int balance ;    
    printf("Please enter your current balance : ");
    scanf("%d",&balance);
    
    int flag = 1 ;
    while(flag){
        int choice ;
        
        printf("\n1-View your balance.\n");
        printf("2-Cash deposit.\n");
        printf("3-Cash withdrawal.\n");
        printf("4-Exit.\n");
        
        printf("\nSelect a option : ");
        scanf("%d",&choice);
        printf("\n");
        
        
        switch(choice){
            case 1 : 
            showMoney(balance); 
            break;
            
            case 2 : {
            int plus;
            printf("How much money you will deposit : ");
            scanf("%d",&plus);
            balance = plusMoney(balance,plus);
            showMoney(balance);
            break;
            }
            
            case 3 : {
                int minus ;
                printf("How much money will you withdrawal : ");
                scanf("%d",&minus);
                balance = minusMoney(balance,minus);
                showMoney(balance);
                break ;
            } 
            
            case 4 : 
            default :
            printf("Exit in progress.\n");
            flag = 0 ;
            break ;
            
            
        }
        
        
    }
    
    printf("Closed the bank system!");
    
    return 0 ;
}
