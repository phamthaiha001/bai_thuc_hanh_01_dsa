#include<stdio.h>

int uscln(int a,int b){
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

int bcnn(int a, int b){
    int tich = a*b;
    int ucln = uscln(a,b);
    int bcnn = tich/ucln;
    return bcnn;
}

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    printf("BCNN = %d",bcnn(a,b));
    return 0;
}