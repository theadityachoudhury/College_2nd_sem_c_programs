#include<stdio.h>
void main(){
    struct book{
        char title[20],author[20];
        float price;
        int pages;
    }b1,b2;
    printf("Enter book name 1st: ");
    gets(b1.title);

    printf("Enter author 1st: ");
    gets(b1.author);
        
    printf("Enter price of 1st: ");
    scanf("%f",&b1.price);
        
    printf("Enter pages of 1st: ");
    scanf("%d",&b1.pages);

    printf("Enter book name 2nd: ");
    gets(b2.title);
    
    printf("Enter author 2nd: ");
    gets(b2.author);
        
    printf("Enter price of 2nd: ");
    scanf("%f",&b2.price);
        
    printf("Enter pages of 2nd: ");
    scanf("%d",&b2.pages);


}