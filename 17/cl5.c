#include<stdio.h>

int main(){

    char  *p[5];
    char a[] = "aditya", b[] = "Vitthal", c[]="adwaith", d[] = "Ishika", e[] = "aditi";
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    int count =0, total=0;
    for(int i=0; i<5; i++){
        for(int j=0;p[i][j];j++){
            
        if(p[i][j]=='a')
        count++;
    }
    printf("%s contains 'a' character: %d\n",p[i], count);
    total+=count;
    count= 0;
    }
    printf("The total number of a is %d",total);
    return 0;
}