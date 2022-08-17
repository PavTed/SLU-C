//
//  main.c
//  23.3.2022
//
//  Created by Tadeáš Páv on 23.03.2022.
//
// C program - Bubble sort

#include <stdio.h>
 
void swap(int *x, int *y)
{
    int
    t = *x;
    *x = *y;
    *y = t;
}
 void bubbleSort(int a[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
 
       for (j = 0; j < n-i-1; j++)
           if (a[j] > a[j+1])
              swap(&a[j], &a[j+1]);
}
void Zobrazit_pole(int pole[], int velikost)
{
    int i;
    for (i=0; i < velikost; i++)
        printf("%d ", pole[i]);
    printf("\n");
}
 int main()
{
//     Jsem zadáme čísla
    int a[] = {1, 9, 8, 2, 0, 3, 4, 7, 6, 5};
    int n = sizeof(a)/sizeof(a[0]);
    bubbleSort(a, n);
    printf("Pořadí čísel: \n");
Zobrazit_pole(a, n);
    return 0;
}
