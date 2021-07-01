//c program to 1+(1+2)+(1+2+3)+..(1+2+n)
#include<stdio.h>
void main(){
    int sum=0,temp=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp+=i;
        sum+=temp;
    }
    printf("%d",sum);
}
