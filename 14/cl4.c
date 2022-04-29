#include<stdio.h>

void main(){
    int a;
    char uname[6]={'A','D','I','T','Y','A'},cname[6];
    for (int i = 0; i < 6; i++)
    {
        cname[i]=(int)(uname[i]+1);
        printf("%c",cname[i]);
    }
    

}