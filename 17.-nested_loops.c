#include <stdio.h>
int main(){
    
    for(int i=0 ; i<=3 ; i++){
        for(int a=0 ; a<=3 ; a++){
            printf("%d ",(i*a));
        }
        printf("\n");
    }
    
    return 0;
}

//-----------------------------------------------------------------------------------------------


#include <stdio.h>
int main(){
    
    for(int i=1 ; i<=10 ; i++){
        for(int a=1 ; a<=10 ; a++){
            printf("%3d ",(i*a));
        }
        printf("\n");
    }
    
//03: 001 , 002 , ... , 099 , 100     
    
    return 0;
}
