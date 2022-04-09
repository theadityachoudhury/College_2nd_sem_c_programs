#include <stdio.h>
void main()
#define g 9.8
{
    int t;
    float iv=0,fv,s;
    //1
    t=1;
    fv = iv+(g*t);
    s = (iv*t)+(0.5*g*(t*t));
    printf("When t = %d final velocity = %.2f and distance covered is %.2f\n",t,fv,s);
    //2
    t=2;
    fv = iv+(g*t);
    s = (iv*t)+(0.5*g*(t*t));
    printf("When t = %d final velocity = %.2f and distance covered is %.2f\n",t,fv,s);
    //3
    t=3;
    fv = iv+(g*t);
    s = (iv*t)+(0.5*g*(t*t));
    printf("When t = %d final velocity = %.2f and distance covered is %.2f\n",t,fv,s);
    //4
    t=4;
    fv = iv+(g*t);
    s = (iv*t)+(0.5*g*(t*t));
    printf("When t = %d final velocity = %.2f and distance covered is %.2f\n",t,fv,s);
    //5
    t=5;
    fv = iv+(g*t);
    s = (iv*t)+(0.5*g*(t*t));
    printf("When t = %d final velocity = %.2f and distance covered is %.2f\n",t,fv,s);
}