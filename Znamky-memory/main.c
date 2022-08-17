//
//  main.c
//  Znamky-memory
//
//  Created by Tadeáš Páv on 16.08.2022.
//

#include <stdio.h>
struct student {
    char jmeno[50];
    int student;
    int znamka;
} s[5];

int main() {
    int i;
    printf("Zadejte jméno a známky\n");
    
    

    // úložiště
    for (i = 0; i < 5; ++i) {
        s[i].student = i + 1;
        printf("\nPro student č.%d,\n", s[i].student);
        printf("Zadejte jméno: ");
        scanf("%s", s[i].jmeno);
        printf("Zadejte známku: ");
        scanf("%i", &s[i].znamka);
    }
    printf("\n Informace o studentech:\n\n");

    // zobrazení
    for (i = 0; i < 5; ++i) {
        printf("\nStudent č. %d\n", i + 1);
        printf("Jméno: ");
        puts(s[i].jmeno);
        printf("Známka: %.1i", s[i].znamka);
        printf("\n");
    }
    return 0;
}

