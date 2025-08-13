// In C, to create random numbers, we usually use the functions from stdlib.h:

#include <stdlib.h>
#include <time.h>


#include <stdio.h>
int main(){
// i writed some problems about rand() func. so we are needing another 2 functions 
  srand(time(NULL));
// this is solution for the proplem 
  //____________________________________________________________________________________________________________
  printf("%d",rand()); // if u are only use rand() function , it's give you a just sama number 
                       // always u can see 41 , 41 and 41 ... etc.
  return 0;
}


//----------------------------------------------------------------------------------------------------------------


// another example time 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
int generate = rand()%2;
printf("number : %d",generate);  
  
  return 0;
}

//----------------------------------------------------------------------------------------------------


// 0 or 9 random generate numbers 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));  
int genNum ;
genNum = rand()%10;

  printf("Random number is : %d",genNum);  //---> from 1 to 10 generating a number

  
  return 0;
}


//- - - - - - - - - - - - - - - - - - - - - -______________________________________Fİnal Example___________________________________ - - - - - - - - - - - - - - - - - - - - - - - 

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){

int max = 6 ;
int min = 1 ;

  int num = rand()%max + min ;
  printf("num : ",num); // min=1 or max=6 1-between-6 just this values are valid.

  return 0; 
}


// -------------------------------------------_ _ _ _______ COMPLEX EXAMPLE - - -_____________________________________________________________

#include <stdio.h>
#include <stdlib.>
#include <time.h>

int main(){

srand(time(NULL));
  
    int min = 100;
    int max = 150;

int numGnrtr ;
numGnrtr = rand()%(max-min+1) + min;
printf("Generated number is : %d",numGnrtr);
   
  return 0 ;
}












