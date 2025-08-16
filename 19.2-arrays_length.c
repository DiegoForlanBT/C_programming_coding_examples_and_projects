#include <stdio.h>
int main (){

 int numbers[] = { 10,20,30,40,50,60 };
// printf("%d \n",sizeof(numbers)); // 24
// printf("%d",sizeof(numbers[0])); // 4 
// 24 / 4 =  6
 
int size = sizeof(numbers) / sizeof(numbers[1]); // we will collet our array's length 

for(int i = 0 ; i<size ; i++){
printf("%d ",numbers[i]);
}
  return 0 ;
}
