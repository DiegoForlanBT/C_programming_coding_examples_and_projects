#include <stdio.h>
int main(){

char vegateble [][10] = { // eğer laç tane içerik girileceği belli değilse ilk [] parantezi boş bırak
      {'g' , 'a' , 'r' , 'l' , 'i' , 'c' , '\0' , '\0' , '\0' , '\0'},
      {'c' , 'u' , 'c' , 'u' , 'm' , 'b' , 'e'  , 'r'  , '\0' , '\0' },
      {'t' , 'o' , 'm' , 'a' , 't' , 'o' , '\0' , '\0' , '\0' , '\0'},
      {'o' , 'n' , 'i' , 'o' , 'n' , '\0' , '\0' , '\0' , '\0' , '\0'}
};



  //--------------------------------------------------------------------------------------------------
  

char fruit [3][10] = {"Apple","Banana","Melon"};
//[3] The content of the first parenthesis determines the number of elements.
//[10] secon parentheisis determines the number of characters in a string

for(int i=0  ; i<3 ; i++ ){
  printf("%s \n",fruit[i]);
}

  //-------------------------------------------------------------------------------------------------------


char names[][10] = {"Jack","Barbossa","Davy","Cuttler","James"};
  int size = sizeof(names) / sizeof(names[0]);

  for(int i=0 ; i<size ; i++){
    printf("%s \n" , names[i]);
  }

  



//----------------------------------------------------------------------------------------------


char fruits[][10] = {
    {"Apple"},
    {"Pineapple"},
    {"Orange"},
    {"Cherry"},
    {"Melon"},
    {"Kiwi"},
    {"Banana"}
};

int size = sizeof(fruits) / sizeof(fruits[0]) ;

for(int i=0 ; i<size ; i++){
  printf("%s \n", fruits[i]);
}

fruits[0][0] = 'e';
fruits[0][4] = 'A' ;

fruits[1][0] = 'e' ;
fruits[1][8] = 'P' ;

fruits[2][0] = 'e';
fruits[2][5] = 'O';



for(int i = 0 ; i<size ; i++){
  printf("%s \n", fruits[i]);
}


  return 0 ;
}





