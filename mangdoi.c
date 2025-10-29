#include <stdio.h>
#include <string.h>


int xaudoixung(char a[100]){
    int l=0;
    int r = strlen(a)-1;
    
    while(l <= r){
        if (a[l] != a[r]){
            return 0;
        }
       l++;
       r--;
    }
    return 1;
}
int main(){
    char a[100];
    gets(a);
    int check = xaudoixung(a);
    if(check==0){
        printf("Khong phai xau palindrome");
    }
    else{
        printf("xau palindrome");
    }
}


