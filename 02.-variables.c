#include <stdio.h>

#include <stdbool.h> // standart boolean

int main(){

  // variable = A resuavle container for value. Behaves as if it were the value it contains.

  int age = 25 ;
  int year = 2025;
  int quantity = 1; // quantity meaninNg in tr MİKTAR  

  printf("You are %d years old.  \n" , age);
  printf("Thr year is %d \n",year);
  printf("You have ordered %d x items\n",quantity);

  float cpu = 3.8f ;
  printf("Cpu speed is %f\n",cpu);
  // six digits after the decimal point are retained

  float price = 1999.99 ;
  printf("Laptop's price is £%.2f\n",price);
  // if you are use the %.2f this meaning is show me just 2 digits from after the point

  float temperatur = -19.5;
  printf("The temperature is %f \n " , temperature);

  double pi = 3.14;
  printf("The value of pi is %lf",pi);
  // we must use long float not %d , %d meaning is decimal . 
  // float 32 bit , double 64 bit . Long float = 2*32 bit 

  double e = 2.718281828459000;
  printf("The value of e is %.15lf: \n",e);

  char symbol = '}';
  printf("The symbol is %c \n",symbol );  

  char character = 'M';
  printf("Your name's first character is %c \n",character);


  char name[] = "El Diego Forland";
  printf("Hello %s \n",name);

  char []food = "goalkeeper"; // this is wrong [] must be end of identifier , | char food [] ; | 
  printf("Your favorite fodd is %s \n",food);

  char email[]  = "jabulani@gmail.com";
  printf(" Diego's email name is : %s \n",email);



  // Don't forget the boolean library 
  bool isOnline = true;
  if(isOnline){
    printf("You are ONLINE.\n");
  }
  else{
    printf("You are OFFLINE.\n");
  }

  bool student = true ;
  if(student){
    printf("You are student.\n");
  }else{
    printf("You are not student.\n");
  }


// variable = whole numbers (4 bytes in modern systems)
 // Brhaves as if it were the value it contains 
  
// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes) 
// char = single character (1 byte)  
// char [] = array of characters (size varies)
// bool = true or false (1 byte , requires <stdbool.H>)  
  

  

  
  
  return 0;
}
