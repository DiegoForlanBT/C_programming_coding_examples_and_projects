// Arrays can collet same data types with variables .

#include <stdio.h>
int main(){
    int numbers[] = {10,20,30,40,50};

  printf("%d",numbers[0]); 
  printf("\n");

  char grades[] = {'A','B','C','D','E'};
  printf("%c",grades[0]); 
  printf("\n");

  char name[] = {"Diego Forlan"};
  printf("%c",name[0]); // it is writing the selected array of index 
  printf("\n");


  numbers[0] = 100;
  numbers[1] = 90;
  numbers[2] = 80;
  numbers[3] = 70;
  numbers[4] = 60;



  printf("%d\n",numbers[0]);
   printf("%d\n",numbers[1]);
    printf("%d\n",numbers[2]);
     printf("%d\n",numbers[3]);
      printf("%d\n",numbers[4]);

  return 0;
}
