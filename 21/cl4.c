#include<stdio.h>

int main()
{
    struct book{
    char name[20];
    float price;
    int page;
};
    struct book b1={
        "K Richie", 130.50, 550
    };

    struct book *ptr;
    ptr = &b1;
    printf("\n%s",ptr->name);
    printf("\n%f",ptr->price);
    printf("\n%d",ptr->page); 
    return 0;
}
