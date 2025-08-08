// Format specifier = Special tokens that begin with a % symbol .
//                    followed by a charcter that specifies the data type
//                    and optional modifiers (width,precision,flags).
//                    Yhey control how data is displayed or interpreted.

#include <stdio.h>
int main(){
 
  int age = 25 ;
  float price = 19.99;
  double pi = 3.1415926535;
  char currency = '$';
  char name[} = "Bro Code";

  printf("%d\n",age);
  printf("%0.2f\n",price);
  printf("%lf\n",pi); // use lf for double , double-precision
  printf("%c\n",currency);
  printf("%s\n",name);


  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  printf("%4d\n",num1);// it's printing 4 spaces 
  printf("%4d\n",num2);// the value expands the right side
  printf("%4d\n",num3);// 1 --> 0001 ; "%4d" ; 


  int num4 = 1;
  int num5 = 10;
  int num6 = 100;

  printf("%-4d\n",num4);
  printf("%-4d\n",num5);
  printf("%-4d\n",num6);


  int num4 = 1;
  int num5 = 10;
  int num6 = 100;

  printf("%04d\n",num4);
  printf("%04d\n",num5);
  printf("%04d\n",num6);


  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  printf("%.2f\n",price1);
  printf("%.2f\n",price2);
  printf("%.2f\n",price3);


  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  printf("%7.2f\n",price1);
  printf("%7.2f\n",price2);
  printf("%7.2f\n",price3);
  //7. meanig is your output can be has max 7 characters 
  // ____1.5 is 7 chracters every space or etc. is 1 character

   



  
  





  
  return 0;
}
