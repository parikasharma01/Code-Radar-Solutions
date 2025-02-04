#include <stdio.h>
int main(){
    int a,b,c ;
    scanf("%d %d %d",&a,&b,&c);
    if(c == addition ){
        printf("%d",a+b);
    }
    else if(c == subtraction){
        printf("%d",a-b);
    }
    else if(c == multiplication){
        printf("%d",a*b);
    }
    else if(c == division){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}