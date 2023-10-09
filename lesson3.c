#include <stdio.h>
#include <inttypes.h>

/*
int main (void) {

    int a = 1, b = 1, expr = 4;
    switch (expr)
    {
        case 2:
            a *= 2;
            break;
        
        case 3:
            a += 5;
            break;

        default:
            a = -1;
            break;
    }

    printf("a = %d\n", a);
    return 0;
}
*/

/*
int main (void) {

    int input;
    scanf("%d", &input);
    switch (input)
    {
    case 1: printf("one\n"); break;
    case 2: printf("two\n"); break;
    case 3: printf("three\n"); break;
    case 4: printf("four\n"); break;
    default:
        printf("more four\n");
    }
    return 0;
}
*/

/*
int main (void) {

    int n;
    n = 1;
    while (n <= 5)
    {
        printf("%d\n", n);
        n++;
    }
    


    return 0;
}
*/

/*
int main (void) {

    int a = 4, b = 6, cnt = 0;
    while (a < b)
    {
        a++;
        cnt++;
    }
    printf("a = %d, b = %d, cnt = %d", a, b, cnt);

    return 0;
}
*/

/*
int main (void) {

    int input, n, cnt;
    printf("enter number: ");
    scanf("%d", &input);
    cnt = 0;
    n = input;
    while (n != 0)
    {
        cnt++;
        n = n / 10;
    }
    printf("In %d found %d digits\n", input, cnt);
    
    return 0;
}
*/

/*
int main (void) {

    uint32_t n, i =2;
    scanf("%" PRId32, &n);
    while (i <= n)
    {
        if (n%i == 0)
        {
            printf("%" PRId32 " ", i);
            n /= i;
        }
        else
            i++;
    }
    
    return 0;
    }
*/

/*
int main (void) 
{
    for(int i = 1; i <= 100; i++) 
    {
    printf("%05d ", i*i);
         if(i%15 == 00)
        {
             printf("\n");
        }
        
    }
    return 0;
}
*/

/*
int main (void) 
{
    int i, a = 1, cnt = 0;
    for(i = 1; i <= 4; i++) 
    {
        a++;
        cnt++;   
    }
    printf("a = %d, cnt = %d", a, cnt); 
    return 0;
}
*/

int a = 10;

int main (void) 
{
    int a = 20;
    if (1 == 1) 
    {
        int a = 30;
        printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
    return 0;
}
