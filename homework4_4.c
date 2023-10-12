//ввести число и вывести его перевернутое значение

#include <stdio.h>

int reverse(int num) {
    int reversed_num = 0;
    while(num > 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}

int main() {
    int num;

    printf("enter int number: ");
    scanf("%d", &num);

    int reversed_num = reverse(num);

    printf("reverse number: %d\n", reversed_num);

    return 0;
}