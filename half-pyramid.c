//c program to half pyramid
//1
//1 2
//1 2 3
// 1 2 3 4
#include<stdio.h>
void main(){
    int i,j,n,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
