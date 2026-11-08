#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float delta = b*b - 4*a*c;
    if(a!=0){
        if(delta>0){
            float x1 = (-b+sqrt(delta))/(2*a);
            float x2 = (-b-sqrt(delta))/(2*a);
            printf("x1 = %.2f, x2 = %.2f\n",x1,x2);
        } else if(delta == 0){
            float x = -b/(2*a);
            printf("x1= x2 = %.2f\n", x);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else{
        if(b!=0){
            float x = -c/b;
            printf("x = %.2f\n",x);
        }
        else{
            if(c!=0){
                printf("Phuong trinh vo nghiem\n");
            }
            else{
                printf("Phuong trinh vo so nghiem\n");
            }
        }
    }
    return 0;
}