#include<stdio.h>

void main(){
    int a;
    char uname[6]={'A','D','I','T','Y','A'};
    for (int i = 0; i < 6; i++)
    {
        a = uname[i];
        printf("%c",a+1);
    }
    

}