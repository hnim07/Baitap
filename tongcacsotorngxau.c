#include <stdio.h>
#include <string.h>

int tongso(char a[100]){
    int len = strlen(a);
    int tong =0 ;
    for(int i=0;i < len ;i++){
        if( a[i] >= '0' && a[i] <= '9'){
            tong+= a[i] - '0';
        }
    }
    return tong;
}
int main(){
    char a[100];
    gets(a);
    printf("%d",tongso(a));
}