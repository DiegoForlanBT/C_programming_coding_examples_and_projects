#include <stdio.h>

int main(){

int num = 42 ;
int *p ;
int **pp ;

printf("num : %d\n" , num);

printf("----------\n");

p = &num ;
printf("p address : %p\n" , p);
printf("*p : %d\n", *p ) ;

printf("----------\n");

pp = &p ;
printf("pp address : %p\n",pp);
printf("*pp : %p\n" , *pp ); // *pp , pp'nin adresine gider ve pp içerik olarak num'un adresine sahip bu yüzden %d ile yazdıramayız %p ile yazdırırız
printf("**pp : %d\n" , **pp);


return 0 ;
}
