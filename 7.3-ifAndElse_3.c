#include <stdio.h>

int main(){

   int choice = 0.0f;
  float pounds = 0.0f;
  float kilograms = 0 ;

  printf("Weight Conversion Calculator\n");
  printf("1. Kilogram1s to Pounds\n");
  printf("2. Pounds to Kilograms\n");

printf("Please make a choice (1 or 2) :");
scanf("%d",&choice);

  if(choice==1){
 //Kilograms to pounds
 printf("Enter the weight in kilograms.");
 scanf("%f", &kilograms);
 pounds = kilograms * 2.20462;
 printf("%.2f kilograms is equal to %.2f pounds", kilograms , pounds);

  }else if(choice==2){
    //Pounds to kilograms
 printf("Enter the weight in pounds.");
 scanf("%f",pounds);
 kilograms = pounds / 2.20462;
 printf("%.2f pounds is equal to %.2f kilograms", pounds , kilograms);

  }else{
    printf("Invalid choice !. Please enter 1 or 2 .\n ");
  }


  
  return 0 ;
}
