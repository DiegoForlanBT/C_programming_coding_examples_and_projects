#include <stdio.h>
#include <stdbool.h>


typedef struct {

    char brand[50];
    char model[50];
    int year ;
    double price ;
    char dollar ;
    bool door ;
    
} car ;

int main(){
car factory[] = {{"Porsche","Turbo S",1993,172679.08,'$',false} ,
                 {"Ford","Ranger",2019,23699.00,'$',true} ,
                 {"Fiat","500e",2025,35500.00,'$',false}} ;

int size = sizeof(factory)/sizeof(factory[0]);

for(int i=0 ; i<size ; i++){
    
    printf("\nBrand : %s\n",factory[i].brand);
    printf("Model : %s\n",factory[i].model);
    printf("Year : %d\n",factory[i].year);
    printf("Price : %.2lf",factory[i].price);
    printf(" %c\n",factory[i].dollar);
    printf("Door number : %d\n",(factory[i].door) ? 4 : 2);
    
  }
    return 0;
}
