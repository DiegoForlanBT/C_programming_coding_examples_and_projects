/*
reserved keyword that gives an existing data type a "nickname" 
helps simplify complex types and imporves code readability
*/

// typedef ; type definition || type : tip , definition : tanım
// typedef gives a nickname for data types
// typedef present_name  new_name ;
   typedef int number ;
   typedef char String[50];


#include <stdio.h>
int main(){

  number a = 12 ; // type changed int names to number
  number b = 26 ;
  number c = a + b ;
  printf("Age : %d\n",c);


  
    String name  = "Commodor ";
    String name1 = "Admiral ";
    String name2 = "James ";
    String name3 ="Norringthan";
printf("%s,%s,%s,%s",name,name1,name2,name3);
  
  
  return 0;
}

//__________________________________________________________________________________________
// NEW EXAMPLE                                   

#include <stdio.h>                                        
typedef char grade[3]; // this meaning is --> grade[1]='A' , grade[2]='B' , grade[3] = '\0' ;                   

int main(){

  grade student1 = "AA";
  grade student2 = "BA";
  grade student3 = "BB";
  grade student4 = "CB";
  grade student5 = "CC";

  printf("%s\n%s\n%s\n%s\n%s\n",student1 ,student2 ,student3 ,student4 ,student5);
  
  return 0;
}











