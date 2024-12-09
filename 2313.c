#include<stdio.h>
int main () {
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);

    if (A+B>C && B+C>A && A+C>B)
    {
        if (A == B && B==C && C==A)
        {
            printf("Valido-Equilatero\n");
        } else {
            if (A==B || B == C || C == A)
            {
                printf("Valido-Isoceles\n");
            }else
            {
                printf("Valido-Escaleno\n");
            }
            
        }

        if ( A*A == B*B + C*C || B*B == A*A + C*C || C*C == A*A + B*B)
        {
            printf("Retangulo: S\n");

        } else
    {
        printf("Retangulo: N\n");

    }
        
    } else
    {
        printf("Invalido\n");
    }
    
    
}