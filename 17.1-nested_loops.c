#include <stdio.h>

int main(){
    int line ;
    int column ;
    
    printf("Enter the value for line : ");
    scanf("%d",&line);
    
    printf("Enter the value for column : ");
    scanf("%d",&column);
    
    for(int i=1 ; i<=line ; i++){
        for(int j=1 ; j<=column ; j++ ){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0 ;
}

//------------------------------------------------------------------------------------------





#include <stdio.h>
int main(){
    
    int row ;
    int column ;
    char character ;
    
    
    printf("Enter the value for row : ");
    scanf("%d",&row);
    
    printf("Enter the value for column : ");
    scanf("%d",&column);
    
    printf("Enter a character for design : ");
    scanf(" %c",&character);
    
    for(int i=1 ; i<=row ; i++){
        for(int a=1 ; a<=column ; a++){
            printf("%c",character);
        }
        printf("\n");
    }
    
    
    
    return 0 ;
}
