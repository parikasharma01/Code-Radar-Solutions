#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(addition){
        printf("%d",a+b);
    }
    else if(subtraction){
        printf("%d",a-b);
    }
    else if(multiplication){
        printf("%d",a*b);
    }
    else if(division){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    else{
        printf("nothing")
    }    
    }    
    return 0;
}
