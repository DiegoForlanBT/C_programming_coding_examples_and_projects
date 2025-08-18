#include <stdio.h>
int main(){
    
    
    char questions[][100] = {
        {"Where is the capital of the England ? "},
        {"Where is the capital of the Italy ? "},
        {"Where is the capital of the Spain ? "},
        {"Where is the capital of the Germany ? "},
        {"Where is the capital of the France ? "}
    };
    
    char options[][4][100] = {
        {"A- Berlin " ,  "B- London " ,    "C- Paris " , "D- Istanbul "},
        {"A- Zurich " , "B- Jakarta " ,    "C- Atina " , "D- Roma "},
        {"A- Ottowa " ,  "B- Madrid " ,     "C- Oslo " , "D- Vegas "},
        {"A- Berlin " ,  "B- London " , "C- Istanbul " , "D- Varna "},
        {"A- Berlin " ,  "B- London " ,    "C- Paris " , "D- Istanbul "}
    }; 
    
    char answers[] = {'B','D','B','A','C'};
    
    char choice ;
    
    int size = sizeof(questions) / sizeof(questions[0]) ;
    
    double correct = 0;
    
    
    for(int i=0 ; i<size ; i++){
        
        printf("\n%s\n",questions[i]);
        
        for(int a=0 ; a<4 ; a++){ // soru 4 şıklı 
        printf("%s\n", options[i][a]);    
        }
        
        printf("Enter your choice : ");
        scanf(" %c",&choice);
        
        if(choice == answers[i]){
            printf("----------The answers is correct !--------------");
            correct++;
        }else{
            printf("----------The answers is Wrong !!!--------------");
        }
        
    }
    
   double score = (correct / size) * 100;
    printf("\nYour quiz score is : %.2lf" , score);
    
    return 0;
}
