#include <stdio.h>
#include <string.h>
int main(){

  int age ;
  float gpa ;
  char grade ;
  char name[30] ;

printf("Enter your age : ");
scanf("%d",&age);//&age , this sentence keeping the age's address
  
printf("Enter your gpa : ");
scanf("%f",&gpa);

printf("Enter your grade : ");
scanf(" %c",&grade);// between left " and % symbol space is very important.
//pls try firstly deleted space between and " , % .
  
printf("Enter your name :");
//scanf("%s",&name); // it's just write first word
// but this 
fgets(name,30,stdin);
//-->  fgets(name,sizeof(name),stdin); 
  name{strlen(name)] -1 = '\0';
  //don't forget the #include <string.h> 


  
  printf("%d\n",age);
  printf("%.2f\n",gpa);
  printf("%c\n",grade);
  printf("%s\n",name);
  


  
  
  return 0;
}
