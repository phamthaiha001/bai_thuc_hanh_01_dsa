#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        int ChuVi = a+b+c;
        int p = ChuVi/2;
        float DienTich = (float)sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Chu vi tam giac: %d\n",ChuVi);
        printf("Dien Tich: %.2f",DienTich);
    }
    else{
        printf("Day khong phai tam giac");
    }
return 0;
}