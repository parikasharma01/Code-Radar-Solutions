#include<stdio.h>
int main(){
    int num,i,a;
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        a=num*i;
        printf("%d x %d = %d\n",num,i,a);
    }
    return 0;
} 