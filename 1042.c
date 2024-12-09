#include<stdio.h>
int main () {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c && a < c )
    {
        printf("%d\n%d\n %d\n", a, b,c );
    }
    
    printf("\n");
    printf("%d\n%d\n %d\n", a, b,c );

    
}