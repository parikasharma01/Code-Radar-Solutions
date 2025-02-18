#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d %.2f",&a,&b,&c);
    float res=a+b+c/3;
     printf("%.2f",res);
    return 0;
}