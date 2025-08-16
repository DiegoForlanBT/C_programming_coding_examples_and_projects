 #include <stdio.h>

int main(){

int dizi [2][2] ;

for(int i=0 ; i<2 ; i++){
  for(int a=0 ; a<2 ;a++){
    printf("Please enter the coordinated %d and %d array's elemenet : ",i ,a);
    scanf("%d", &dizi[i][a]);
  }
}

for(int a=0 ; a<2 ; a++){ // rows : satır
  for(int b=0 ; b<2 ; b++){ // column : sütun
    printf("%d ", dizi[a][b] );
  }
  printf("\n");
}

return 0 ;
}
