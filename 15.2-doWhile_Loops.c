#include <stdio.h>
int main(){
    // do while loops , firstly do some codes between { and }
  // after that while checks the condition
    
    int number = 1;
    
    do{
        printf("Enter a number , greater than 0 : ");
        scanf("%d", &number);
    }
    while(number <= 0);
    
    return 0;
}
