#include <stdio.h>

int main(){

int number = 2055 ;
int *p ;
p = &number ;


printf("number : %d \n",number);
printf("address of number : %p \n",p);

char *p0;
p0 = p ; // p has address of number
 printf("p0 address info : %p \n" , p0);
 printf("*p0 :%d\n", *p0);

 /*
 2055 is an integer number so

 2055 = 0000 0000 --> 1 byte
        0000 0000 --> 1 byte
        0000 1000 --> 1 byte
        0000 0111 --> 1 byte
 */

printf("\n +1 increament pointer address : %p \n", (p0+1) );
printf("*(po+1) : %d\n" , *(p0+1)  );

printf("\n +2 add pointer address : %p\n", p0+2) ;
printf("*(p0+2) : %d\n" , *(p0+2) );

printf("\n +3 add pointer address : %p\n" , p0+3) ;
printf("*(p0+3) : %d\n " , *(p0+3));
// p0 is holding start of address


return 0;
}
