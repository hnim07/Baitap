#include <stdio.h>


int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i =0; i<=n;i++){
        scanf("%d",&a[i]);
    }
    int i=0;
    if (n%2==0){
        while (i<n/2){
            if(a[i] - a[n-i]!=0){
                printf("DAY KHONG PHAI LA DAY DOI XUNG");
                break ;
            }
            

        }
    }

}