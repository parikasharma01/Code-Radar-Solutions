#include <stdio.h>
int main(){
    int sp,cp;
    scanf("%d %d",&SP,&CP);
    if(sp > cp){
        printf("Profit");
    }
    else if(cp > sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}