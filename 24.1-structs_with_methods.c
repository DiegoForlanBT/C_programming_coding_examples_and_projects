#include <stdio.h>
#include <stdbool.h>

typedef struct {
    
    char name[50] ;
    int age ;
    float gpa ;
    bool isGraduated ;
    
} student ;


void printInfo(student nm){

   printf("Student name : %s\n", nm.name);
    printf("Student age : %d\n", nm.age);
    printf("Grade gpa : %.2lf\n", nm.gpa);
    printf("is Graduated : %s\n" , (nm.isGraduated) ? "True" : "False" );
    printf("\n");
    
    
}


int main (){
 
    student James = {"James", 21 , 3.44 , true};
    printInfo(James);
    
    student Kenna = {"Kenna", 29 , 3.99 , false};
    printInfo(Kenna);
    
    
    return 0;
}
