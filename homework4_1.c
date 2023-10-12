//вывести сумму квадратов всех чисел от А до В

#include <stdio.h>
#include <float.h>

#define BASE 10

int main (void) {

    int a, b, sum;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    for(a; a <= b; a++) 
        sum += a * a;
        printf("sum square = %d\n", sum);
        return 0;
}