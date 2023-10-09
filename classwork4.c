#include <stdio.h>

int main (void) {
int input = 2;
    switch(input)
    {
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        case 4: printf("four\n"); break;
        default: printf("default\n");
    }

    return 0;
}