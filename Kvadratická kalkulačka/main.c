//
//  main.c
//  Kvadratická kalkulačka
//
//  Created by Tadeáš Páv on 14.06.2022.
//

#include<stdio.h>
#include<math.h>
 
int main(){
  float a,b,c;
  float d,root1,root2;
 
 
  printf("Vložte a, b, c do Vaší kvadratické rovnice : ");
  scanf("%f%f%f",&a,&b,&c);
   
  d = b * b - 4 * a * c;
  
  if(d < 0){
    printf("Kořeny jsou komplexní čísla.\n");
 
    printf("Kořeny kvadratické rovnice jsou: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
  
    return 0;
  }
  else if(d==0){
   printf("Oba kořeny jsou si rovny.\n");
 
   root1 = -b /(2* a);
   printf("Kořenem kvadratické rovnice jest: %.3f \n",root1);
 
   return 0;
  }
  else{
   printf("Kořeny jsou realné čísla.\n");
  
   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Kořeny kvadratické rovnice jsou: %.3f , %.3f \n",root1,root2);
  }
 
  return 0;
}
 
