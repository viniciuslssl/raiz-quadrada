#include <stdio.h>
#include <math.h>
main()
{

    float n, raiz;
    printf("digite um numero");
        scanf("%f", &n);
    if (n >= 0)
    {
        raiz = sqrt(n);
        printf("%.2f",raiz);
    }
    else
    {
        double quadrado = n * n;
        printf("%.2f", quadrado);
    }
}