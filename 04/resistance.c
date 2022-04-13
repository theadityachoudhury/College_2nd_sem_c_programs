#include <stdio.h>
void main()
{
    float r1,r2,r3,sr,pr,i1,i2,v;
    
    printf("Enter value of first resistance:- ");
    scanf("%f",&r1);
    printf("Enter value of second resistance:- ");
    scanf("%f",&r2);
    printf("Enter value of third resistance:- ");
    scanf("%f",&r3);
    
    printf("Enter value of third resistance:- ");
    scanf("%f",&v);

    sr = r1+r2+r3;
    pr = sr/(r1*r2*r3);
    i1 = v/sr;
    i2 = v/pr;
    printf("If the resistance are in series then the equivalent resistance is %f\n",sr);
    printf("If the resistance are in parallel then the equivalent resistance is %f\n",pr);
    printf("The current through the circuit when connected to a voltage source is connected in series is %f\n",i1);
    printf("The current through the circuit when connected to a voltage source is connected in parallel is %f\n",i2);
}