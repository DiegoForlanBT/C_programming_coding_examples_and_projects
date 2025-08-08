#include <stdio.h>
#include <string.h>
int main(){

int quantity = 0;
float price = 0.0f;
char item[50] = "";
char currency = '$';
float total = 0.0f ;

  printf("Which would you like order the item ? : ");
  fgets(item,sizeof(item),stdin);

  printf("How many you order each ? : ");
  scanf("%d",&quantity);

  printf("How many price the one item ? : ");
  scanf("%f",&price);
  
  printf("--Your order summary--\n");

  total = quantity * price ;
  printf("Total price : %c%.2f " , currency , total);


  
  
  return 0;
}
