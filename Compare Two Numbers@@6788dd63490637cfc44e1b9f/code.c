#include <stdio.h>
int mian(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Equal");
    }
    else if(b>a){
        printf("Second");
    }
    else{
        printf("First");
    }

    return 0;
}