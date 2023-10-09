#include <stdio.h>
#include <float.h>

#define BASE 10

/*
int main (void) {
int input = 2;
    switch(input)
    {
        case 1: printf("one\n"); 
        case 2: printf("two\n"); 
        case 3: printf("three\n"); 
        case 4: printf("four\n"); 
        default: printf("default\n");
    }

    return 0;
}
*/

/*
int main (void) 
{
    int a, b, n;
    printf("Enter A number: ");
    scanf("%d", &a);
    printf("Enter B number: ");
    scanf("%d", &b);
    
    for(a; a <= b; a++) 
    {
        printf("%d ", a * a);
        if(a%5 == 00)
        {
             printf("\n");
        }
        
    }
    return 0;
}
*/

/*
int main (void) {
    int a, other_nums, num;
    scanf("%d", &a);
    while (a > 0)
    {
        num = a % 10;
        other_nums = a / 10;
        while (other_nums > 0)
        {
            printf("other_nums = %d\n", other_nums);
            if (num == other_nums % 10)
            {
                printf("YES\n");
                return 0;
            }
            other_nums /= 10;
        }
        a /= 10;
    }
        printf("NO\n");
    return 0;
}
*/

/*
int main (void) 
{

    int a, other_nums, num, other_nums2;
    printf("Enter the number: ");
    scanf("%x", &a);

    while (a > 0)
    {
        num = a % BASE;
        other_nums = num / BASE;
        printf("YES\n");
        return 0;           
    }
        a /= BASE;
        printf("NO\n");
    return 0;
}
*/

/*
int main(void)
{
    unsigned int a, count = 0;
    do
    {
        scanf("%d", &a);
        count++;
    } while (a != 0);
    printf("%d\n", count - 1);
    return 0;
}
*/

int main (void) 
{

    int a, sum;
    printf("Enter the number: ");
    scanf("%d", &a);
    do
    {
        sum += (a % BASE);
    } while (a /= BASE);
    printf("sum = %d\n", sum);
    sum == 10 ? printf ("yes\n") : printf ("no\n");
    printf("%s\n", sum == 10 ? "YES" : "NO");
    return 0;
}







