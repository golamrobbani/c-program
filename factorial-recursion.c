//c program to factorial recursion of integer number
#include<stdio.h>
int main(){
    int n,fresult;
    scanf("%d",&n);
    fresult=fact(n);
    printf("%d",fresult);
}

int fact(n){
    if(n<=1){
        return 1;
    }else{
         return n*fact(n-1);
    }
}
