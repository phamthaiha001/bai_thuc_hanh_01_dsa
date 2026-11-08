#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c){
            printf("Tam Giac Deu.\n");
        }
        else{
            if(a==b || b==c || c==a){
                printf("Tam Giac Can.\n");
            }
            else{
                printf("Tam Giac Thuong");
            }
        }
    }
    else{
        printf("Khong la tam giac\n");
    }
}