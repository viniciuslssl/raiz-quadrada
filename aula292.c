 #include <stdio.h>
#include <math.h>
main()
{
    int a, b, c, d;
   
    printf("digite os numero");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
     int maior;
    int menor;
    if (a > b && a > c && a > d)
    {
        maior = a;
       
    }
     if (b > d && b > c && b > a)
    {    maior = b;
      
    }
     if (c > d && c > a && c >b)
    {   maior =c;
       
    }
     if(d>a && d > b && d > c){
        
      maior= d;}
    
    else if ( a <b && a < c && a < d){
        menor = a;
    } if( b < a && b < c && b < d){
        menor =b;
    }else if (c<a && c<b && c<d){
        menor = c;
    }else if (d < a && d<b && d<c){
        menor = d;
    }
printf("maior valor : %d", maior);
printf("\nmenor valor : %d", menor);



} 