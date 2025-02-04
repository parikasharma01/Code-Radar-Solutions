#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c==addition){
        printf("a+b");
    }
    else if(c==subtraction){
        printf("a-b");
    }
    else if(c==multiplication){
        printf("a*b");
    }
    else if(c==division){
        printf("a/b");
    }
    return 0;
}