//ввести число и определить верно ли что в нем только 3 цифры

#include <stdio.h>
#include <float.h>

//#define BASE 10

int main (void) {

    int a, num, other_nums;
    printf("Enter number a: ");
    scanf("%d", &a);
    
    num = a % 100;
    other_nums = a / 100;

    other_nums >= 1 && other_nums <= 9 ? printf("YES\n") : printf("NO\n");
    
    return 0;
}