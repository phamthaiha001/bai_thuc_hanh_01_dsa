#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int dem = 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem!=0 || n<=1){
        printf("%d khong phai so nguyen to\n",n);
    }
    else if(n==2){
        printf("%d la so nguyen to\n",n);
    }
    else{
        printf("%d la so nguyen to\n",n);
    }
    return 0;
}