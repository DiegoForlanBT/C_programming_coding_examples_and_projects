#include <stdio.h>
int main(){

char notlar[] = {'A','B','C','D','E'};

for(int i = 0 ; i<5 ;i++){
  printf("%c ", notlar[i]);
}

printf("\n"); // bir satır boşluk bırakıldı

int sayilar[] = {10,20,30,40,50};

for(int i = 0 ; i<5 ; i++){
  printf("%d ",sayilar[i]);
}

printf("\n");

char isim[] = {"Diego Forlan"};
for(int i = 0 ; i<12 ; i++ ){
  printf("%c",isim[i]);
}

  
  return 0 ;
}
