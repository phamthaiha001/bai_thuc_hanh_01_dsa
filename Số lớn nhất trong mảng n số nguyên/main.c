#include<stdio.h>

void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

int max(int a[], int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(a[max]<a[i]){
            max = i;
        }
    }
    return max;
}


int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    nhap(a,n);
    
    printf("%d",a[max(a,n)]);
    return 0;
}