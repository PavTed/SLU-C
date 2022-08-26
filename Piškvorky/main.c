//
//  main.c
//  Piškvorky
//
//  Created by Tadeáš Páv on 15.06.2022.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int vitez = 0, pocet = 0;
    int poz[9], index, symbol, hrac, flag, i, j, k;
    
    for(i=0; i<9; i++){
        poz[i] = ' ';
    }
    
    while(pocet < 9 && vitez != 1){
        flag=0;
//        hrací pole
        printf("\n");
        printf("%c|%c|%c\n", poz[0], poz[1], poz[2]);
        printf("-+-+-\n");
        printf("%c|%c|%c\n", poz[3], poz[4], poz[5]);
        printf("-+-+-\n");
        printf("%c|%c|%c\n", poz[6], poz[7], poz[8]);
        
        if(pocet % 2 == 0){
            symbol = 'X';
            hrac = 1;
        }else{
            symbol = 'O';
            hrac = 2;
        }
        
        printf("Zaberte políčko(1-9): ", hrac);
        scanf("%d", &index);
        if(index<1 || index>9){
            printf("Povolené čísla jsou od 1 -9");
            continue;
        }
        if(poz[index-1] == 'X' || poz[index-1] == 'O'){
            printf("Pozice je zabraná\n");
            continue;
        }
        
        poz[index-1]=symbol;
        pocet++;
        
        for(i=0; i<9; i++){
            if(i%3 == 0)
                flag = 0;
            if(poz[i] == symbol)
                flag++;
            if(flag == 3){
                vitez = 1;
               
                }
        }
    }

    return 0;
}

