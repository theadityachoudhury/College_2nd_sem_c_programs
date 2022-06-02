#include<stdio.h>

int main()
{
    struct book{
    char name[20];
    float price;
    int page;
};
    int j;

    struct book *ptr,b[5];
    ptr =b;
    for(j=0;j<1;j++){
        printf("\nEnter the book name, price and pages");
        scanf("\n%s %f %d",(ptr+j)->name,&(ptr+j)->price,&(ptr+j)->page);
    }
    for(j=0;j<1;j++){
    printf("\n%s %f %d",ptr[j].name,ptr[j].price,ptr[j].page);
    }

    return 0;
}
