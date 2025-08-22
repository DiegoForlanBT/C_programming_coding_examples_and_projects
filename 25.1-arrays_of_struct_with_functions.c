#include <stdio.h>

typedef struct {
    
    char title[50];
    char author[50];
    int year ;
    double price ;
    char moneySym ;
    
}book;


void printBooks(book write[] , int size){

for(int i=0 ; i<size ; i++) {    
    printf("\nBook's name : %s\n",write[i].title);
    printf("Book's author : %s\n",write[i].author);
    printf("Year : %d\n",write[i].year);
    printf("Price : %.2lf %c:\n",write[i].price , write[i].moneySym);
 }
    
}


int main(){
    
    book write[] = {
        {"Les Miserables" , "Victor Hugo" , 1862 , 22.50 , '$'},
        {"The Song of Achilles" , "Madeline Miller" , 2011 , 24.29 , '$'},
        {"Fathers and Sons" , "Ivan Turgenyev" , 1863 , 7.35 , '$'},
        {"A Tale of Two Cities" , "Charles Dickens" , 1859 , 7.39 , '$' }
    }; 
    
    int size = sizeof(write)/sizeof(write[0]);
    printBooks(write , size);
    
    return 0 ;
}
