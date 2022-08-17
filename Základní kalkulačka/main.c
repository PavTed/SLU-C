//
//  main.c
//  Základní kalkulačka
//
//  Created by Tadeáš Páv on 14.06.2022.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
   
    double num1;
    double num2;
    char op;
    
    printf("Zadejte první číslo");
    scanf("%lf", &num1);
    printf("Zadejte operaci (+, - , *, /)");
    scanf(" %c", &op);
    printf("Zadejte druhé číslo");
    scanf("%lf", &num2);
    
    if(op == '+'){
       printf("%f", num1 + num2);
    } else if(op == '-'){
           printf("%f", num1 - num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    }else {
        printf("Neplatné znaménko");
    }
       
    return 0;
}
