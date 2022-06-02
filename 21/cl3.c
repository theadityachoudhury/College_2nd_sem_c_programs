#include <stdio.h>
#include <string.h>
void main()
{
    struct cpy
    {
        char name[20];
        int age;
        float salary;
    };


    struct cpy a1 = {"Aditya", 19,12454657};
    struct cpy a2;
    strcpy(a2.name, a1.name);
    a2.age = a1.age;
    a2.salary = a1.salary;
    printf("%s  %d  %f", a2.name, a2.age, a2.salary);
}
