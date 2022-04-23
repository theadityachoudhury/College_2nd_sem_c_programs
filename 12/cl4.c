#include<stdio.h>

float product(float i,float in){
    float p=i*in;
    return p;
}

int main(){

    float i;
    int in;
    printf("Enter two decimal numbers of which we have to find product: ");
    scanf("%f %d",&i,&in);
    float k =product(i, in);
    printf("product: %f",k);
    return 0;
}