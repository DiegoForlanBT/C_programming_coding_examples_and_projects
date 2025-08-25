#include <stdio.h>

int main(){
    
    int num = 99 ;
    printf("num : %d\n",num );
    printf("- - - - - - - - - - - - -\n");
    
    int *p ;
    p = &num ;
    printf("&num : %p\n",p);
    printf("*p : %d \n",*p);
    printf("- - - - - - - - - - - - -\n");
    
    int **pp ;
    pp = &p ;
    printf("&p : %p \n" , pp);
    printf("&num : %p\n" , *pp);
    printf("num or **pp : %d\n",**pp);
    printf("- - - - - - - - - - - - -\n");
    
    int ***ppp ;
    ppp = &pp ;
    printf("&pp : %p \n" , ppp);
    printf("&p : %p \n" , *ppp);
    printf("&num :%p \n" , **ppp);
    printf("num or ***ppp : %d\n" , ***ppp);
    
    printf("- - - - - - - - - - - - -\n");
    ***ppp = 123 ;
    printf("num : %d\n",num);
    
    
    
    return 0 ;
}
