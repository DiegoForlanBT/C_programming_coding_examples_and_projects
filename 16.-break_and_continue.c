#include <stdio.h>

// break : it is break the loop (STOP)
// continue : it is skipped current or assigned value (SKIP) 

#include <stdio.h>

int main(){
    
    for(int i = 0 ; i<10 ; i++){
        if(i==7){
            break ;
        }
        printf("\n %d",i);
    }
    
    printf("\n");
      printf("\n");
        printf("\n");
        
    for(int a = 0 ; a<10 ; a++){
        if(a==7){
            continue ;
        }
        printf("\n %d " , a);
    }
    
    
    
    
    
    return 0;
}
