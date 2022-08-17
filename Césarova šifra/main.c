//
//  main.c
//  Encrypting
//
//  Created by Tadeáš Páv on 06.04.2022.
//

#include <stdio.h>

void cesar(char sifra[], int shift) {
  int i = 0;
  while (sifra[i] != '\0') {
    if (sifra[i] >= 'A' && sifra[i]<= 'Z') {
        char c = sifra[i] - 'A';
        c += shift;
        c = c % 26;
        sifra[i] = c + 'A';
    }
    i++;
  }
  printf("%s", sifra);
}
int main()
{
//    Zde napište slovo které chcete zašifrovat
    char sifra[] = "AHOJ\n";
    cesar(sifra, 6);
    
    return 0;
}
