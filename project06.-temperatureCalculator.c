#include <stdio.h>
int main(){

  printf("Temperature Algorithm\n");
  char choice = "";
  float celcius = 0.0f;
  float fahrenheit = 0.0f;

  printf("Please make a choice : ");
  scanf("%c", &choice);

  if(choice == 'F' || 'f'){
    //celcius to fahrenheit temperature
    printf("Please enter current celcius value : ");
    scanf("%f",&celcius);
    fahrenheit = (9.0/5.0)*(celcius) + 32.0;
    printf("%.2f Celcius convert as %.2f Fahrenheit !", celcius , fahrenheit);

  }
else if(choice == 'C'||'c'){
    //fahrenheit to celcius temperature
    printf("Please enter current celcius value : ");
    scanf("%f",&fahrenheit);
    celcius = (5.0/9.0)*(fahrenheit) - 32.0;
    printf("%.2f Fahnrenheit convert as %.2f Celcius !", fahrenheit , celcius);
}
else{
  printf("You entered a invalid value. Please start again the program. ");
}
  
  return 0;
}
