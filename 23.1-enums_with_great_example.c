#include <stdio.h>

typedef enum {
  Ramses_II ,
  Julius_Caesar ,
  Napoleon_Bonaparte ,
  Mustafa_Kemal_Atatürk ,
  Erwin_Rommel ,
  Ferdinand_Foch ,
  Joseph_Stalin ,
  Winston_Churchill ,
  Franklin_Roosevelt
    
} leader ;


void battleWins (leader win){
    switch(win){
        
        case Ramses_II : 
        printf("*** Ramses II ***\nBattle of Kadesh (c. 1274 BC) – against the Hittites ");
        break ;
        
        case Julius_Caesar :
        printf("*** Julius Ceaser ***\nBattle of Bibracte (58 BC)\nBattle of Vosges (58 BC)\nBattle of Sabis / Sambre (57 BC)\nSiege of Alesia (52 BC)");
        break ;
        
        case Napoleon_Bonaparte :
        printf("*** Napoleon Bonaparte ***\nBattle of Marengo (1800)\nBattle of Austerlitz (1805)\nBattle of Jena–Auerstedt (1806)\nBattle of Friedland (1807)");
        break;
        
        case Mustafa_Kemal_Atatürk :
        printf("*** Mustafa Kemal Atatürk ***\nGallipoli Campaign (1915)\nBattle of Sakarya (1921)\nGreat Offensive / Battle of Dumlupınar (1922)");
        break ;
        
        case Erwin_Rommel :
        printf("***Erwin Rommel***\nBattle of Gazala (1942)\nCapture of Tobruk (1942)");
        break;
        
        case Ferdinand_Foch :
        printf("***Ferdinand Foch***\nFirst Battle of the Marne (1914)\nHundred Days Offensive (1918)");
        break;
        
        case Joseph_Stalin :
        printf("***Joseph Stalin***\nBattle of Stalingrad (1942–43)\nBattle of Kursk (1943)\nOperation Bagration (1944)");
        break ;
        
        case Winston_Churchill :
        printf("***Winston Churchill***\nNo direct battles; led Britain politically during WWII");
        break ;
        
        case Franklin_Roosevelt :
        printf("***Franklin D. Roosevelt***\nNo direct battles; political leadership in Allied victory WWII (1939–1945)");
        
    }
}



int main(){
    
leader commander = Mustafa_Kemal_Atatürk;
battleWins(commander);
    
    
    
    return 0;
    
}
