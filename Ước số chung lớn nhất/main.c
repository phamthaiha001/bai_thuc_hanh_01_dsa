#include<stdio.h>

int uscln(int a, int b){
    while(a*b!=0){
        if(a>b){
            a%=b;
        }
        else{
            b%=a;
        }
    }
    return a+b;
}

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d",uscln(a,b));
    return 0;
}